#include "����Ŭ����.h"

int main_class_pointer()
{

	//�Ҵ���� ���� ������ ������ �����Ҵ��� �޸𸮸� ���� �����ݴϴ�. (C+++ �����Ҵ� Ű���� new)
	//�����Ҵپ��� �޸��� ����� �����ٸ� �ݵ�� ���� ���ּ����մϴ� . (C++ �޸� ���� Ű���� delete)
	����Ŭ����* pClass = new ����Ŭ����;
	
	//�̸� . ���� �Է¹ޱ� 
	cout << "name?";
	cin >> pClass->m_Name;

	cout << "score";
	cin >> pClass->m_Score;

	//��� ���
	pClass->PrintRank();

	
	
	delete pClass; // �޸� ����

	return 0;
}