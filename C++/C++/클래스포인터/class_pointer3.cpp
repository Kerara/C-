//����Ŭ����.h������ �����ϰ� 
//����Ŭ���� ���� c_Class,y_Class�� �����Ҵ����ּ��� !(new)
//c_Class, y_Class�� �̸��� ������ �Է��ϰ� 
//�� �� ���� �� ���� ������ �޾Ҵ��� ����� ������ּ��� !
// �۾��� ���� �Ŀ��� �޸𸮸� �������ּ���

//input
// name?  ����
// score? 65
// name? ����
// score? 85

//output
// ������ ������ ö���� �������� �����ϴ�.

// +a
// ������ ������ ö���� �������� 20�� �� �����ϴ�. 

#include "����Ŭ����.h"
#pragma warning (disable : 4996)

int main_class_poiner3()
{
	����Ŭ����* c_Class = new ����Ŭ����;
	����Ŭ����* y_Class = new ����Ŭ����;

	cout << "name?";
	cin >> c_Class->m_Name;

	cout << "score?";
	cin >> c_Class->m_Score;

	cout << "name?";
	cin >> y_Class->m_Name;

	cout << "score?";
	cin >> y_Class->m_Score;

	//1.c_Class�� ������ y_Class�� �������� ���ٸ�
	if (c_Class->m_Score > y_Class->m_Score)
	{
		cout << c_Class->m_Name << "�� ������" << y_Class->m_Name << "����������"
			<< c_Class->m_Score - y_Class->m_Score << "�� �� �����ϴ�."<<endl;
	}
	//2 c_Class�� ������ y_Class�� �������� ���ٸ�
	else if (c_Class->m_Score < y_Class->m_Score)
	{
		cout << y_Class->m_Name << "�� ������" << c_Class->m_Name << "����������"
			<< y_Class->m_Score - c_Class->m_Score << "�� �� �����ϴ�." << endl;
	}

	//3. �������� ���ٸ�
	else
	{
		cout << c_Class->m_Name << "�� ������" << y_Class->m_Name << "�� ������ �����ϴ�." << endl;
	}
	//�����Ҵ��� �޸𸮸� �������ݴϴ�.

	delete c_Class;
	delete y_Class;
	return 0;

}
