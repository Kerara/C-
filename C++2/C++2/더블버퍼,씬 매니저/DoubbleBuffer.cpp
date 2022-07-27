#include "DoubbleBuffer.h"

HANDLE DoubbleBuffer::GetBuffer()
{
    return m_hBuffer[m_Bufferlndex];
}

void DoubbleBuffer::CreateBuffer(const int& width, const int& height)
{
    CONSOLE_CURSOR_INFO cci; //�ܼ�â Ŀ�� ����
    COORD size = { width, height };  //���� ũ�⸦ �����ϴ� ����ü
    SMALL_RECT rect; // â ũ�⸦ �����ϴ� ����ü

    //0�� ���� ����

    m_hBuffer[0] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE,
        0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    SetConsoleScreenBufferSize(m_hBuffer[0], size); //���� ũ�� ����
    SetConsoleWindowInfo(m_hBuffer[0], TRUE, &rect); //â ũ�� ����

    //1�� ���� ����
    m_hBuffer[1] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE,
        0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    SetConsoleScreenBufferSize(m_hBuffer[1], size); //���� ũ�� ����
    SetConsoleWindowInfo(m_hBuffer[1], TRUE, &rect); //â ũ�� ����

    cci.dwSize = 1;
    cci.bVisible = FALSE;

    SetConsoleCursorInfo(m_hBuffer[0], &cci); //�����̴� Ŀ�� �����
    SetConsoleCursorInfo(m_hBuffer[1], &cci); //�����̴� Ŀ�� �����
}

void DoubbleBuffer::WriteBuffer(int x, int y,  const char* string)
{
    DWORD dw;
    COORD CursorPosition = { x, y }; // ��ǥ ��ġ

    //���۳����� ��ǥ �̵�
    SetConsoleCursorPosition(m_hBuffer[m_Bufferlndex], CursorPosition);
    WriteFile(m_hBuffer[m_Bufferlndex],string,strlen(string),&dw,NULL);
}

void DoubbleBuffer::FlippingBuffer()
{
    Sleep(30);
    
    //���� ȭ��ȭ / ȭ�鿡 ���
    SetConsoleActiveScreenBuffer(m_hBuffer[m_Bufferlndex]);

    // ���� ���� ����
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
