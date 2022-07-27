#include "DoubbleBuffer.h"

HANDLE DoubbleBuffer::GetBuffer()
{
    return m_hBuffer[m_Bufferlndex];
}

void DoubbleBuffer::CreateBuffer(const int& width, const int& height)
{
    CONSOLE_CURSOR_INFO cci; //콘솔창 커서 정보
    COORD size = { width, height };  //버퍼 크기를 저장하는 구조체
    SMALL_RECT rect; // 창 크기를 저장하는 구조체

    //0번 버퍼 생성

    m_hBuffer[0] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE,
        0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    SetConsoleScreenBufferSize(m_hBuffer[0], size); //버퍼 크기 설정
    SetConsoleWindowInfo(m_hBuffer[0], TRUE, &rect); //창 크기 설정

    //1번 버퍼 생성
    m_hBuffer[1] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE,
        0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    SetConsoleScreenBufferSize(m_hBuffer[1], size); //버퍼 크기 설정
    SetConsoleWindowInfo(m_hBuffer[1], TRUE, &rect); //창 크기 설정

    cci.dwSize = 1;
    cci.bVisible = FALSE;

    SetConsoleCursorInfo(m_hBuffer[0], &cci); //깜빡이는 커서 사라짐
    SetConsoleCursorInfo(m_hBuffer[1], &cci); //깜빡이는 커서 사라짐
}

void DoubbleBuffer::WriteBuffer(int x, int y,  const char* string)
{
    DWORD dw;
    COORD CursorPosition = { x, y }; // 좌표 위치

    //버퍼내에서 좌표 이동
    SetConsoleCursorPosition(m_hBuffer[m_Bufferlndex], CursorPosition);
    WriteFile(m_hBuffer[m_Bufferlndex],string,strlen(string),&dw,NULL);
}

void DoubbleBuffer::FlippingBuffer()
{
    Sleep(30);
    
    //버퍼 화설화 / 화면에 출력
    SetConsoleActiveScreenBuffer(m_hBuffer[m_Bufferlndex]);

    // 다음 버퍼 선택
    m_Bufferlndex = !m_Bufferlndex;
}

void DoubbleBuffer::ClearBuffer()
{
    COORD coord = { 0.0 };
    DWORD dw;

    FillConsoleOutputCharacter(m_hBuffer[m_Bufferlndex], ' ',150 * 100, coord, &dw);
}

void DoubbleBuffer::DestroyBuffer()
{
    CloseHandle(m_hBuffer[0]);
    CloseHandle(m_hBuffer[0]);
}

bool DoubbleBuffer::CloseHandle(HANDLE& handle)
{
    if (INVALID_HANDLE_VALUE != handle)
    {
        __try
        {
            return (0 != ::CloseHandle(handle));
        }
        __finally
        {
            handle = INVALID_HANDLE_VALUE;
        }
    }
    return false;
}

DoubbleBuffer::DoubbleBuffer()
{
    m_Bufferlndex = 0;
}

DoubbleBuffer::~DoubbleBuffer()
{
}
