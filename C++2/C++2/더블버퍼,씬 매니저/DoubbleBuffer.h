#pragma once
#include <conio.h>
#include <Windows.h>
class DoubbleBuffer
{
public :
	HANDLE GetBuffer();

	void CreateBuffer(const int& width, const int& height);// 버퍼 생성
	void WriteBuffer(int x, int y, const char* string); //버퍼쓰기
	void FlippingBuffer(); // 버퍼전환
	void ClearBuffer(); //버퍼지우기
	void DestroyBuffer(); //버퍼 해제
	
	bool CloseHandle(HANDLE& handle); //핸들처리
private:
	int m_Bufferlndex; //버퍼 인덱스
	HANDLE m_hBuffer[2]; //버퍼 핸들러
public:
	DoubbleBuffer();
	~DoubbleBuffer();

};

