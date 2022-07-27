#pragma once
#include <conio.h>
#include <Windows.h>
class DoubbleBuffer
{
public :
	HANDLE GetBuffer();

	void CreateBuffer(const int& width, const int& height);// ���� ����
	void WriteBuffer(int x, int y, const char* string); //���۾���
	void FlippingBuffer(); // ������ȯ
	void ClearBuffer(); //���������
	void DestroyBuffer(); //���� ����
	
	bool CloseHandle(HANDLE& handle); //�ڵ�ó��
private:
	int m_Bufferlndex; //���� �ε���
	HANDLE m_hBuffer[2]; //���� �ڵ鷯
public:
	DoubbleBuffer();
	~DoubbleBuffer();

};

