#include "����Ŭ����3.h"
#pragma warning(disable : 4996)

void ����Ŭ����3::SetName(char* text)
{
	//���ڿ� �����Լ��� ����ؼ� name�� text�� ������ �����մϴ�.
	//'\O'���ڱ��� �����մϴ�.
	strcpy(name, text);
}

char* ����Ŭ����3::GetName()
{
	return name;
}



����Ŭ����3::����Ŭ����3()
{
}

����Ŭ����3::~����Ŭ����3()
{
}
