// private int�� id , char name[256]�� ��������� ������ �ִ� UserInfo Ŭ���� ����/�������ּ���.
// id , name�� ����� �� �ֵ��� getter / setter�� ������ּ���.
// UserInfo �ν��Ͻ��� ������ �� id������ 1234, name���� "�̸����� " �� ������ �������ּ��� (������)
// �ν��Ͻ��� �Ҹ��Ҷ� "�Ҹ��ڸ� ȣ���մϴ�. ." �� ����ϵ��� �������ּ��� . (�Ҹ���)
// ��Ʈ������Ʈ main���� UserInfo �ν��Ͻ��� ������ id�� 4567, name���� "��ö��" ���� �� ������ּ��� !

#include <iostream>
#pragma  warning(disable : 4996)

using namespace std;
class UserInfo
{
private:
	int id;
	char name[256];
public:
	void SetID(int value) { id = value; }
	void SetName(const char* data) { strcpy(name, data); }

	int GetID() { return id; }
	char* GetName() { return name; }

public:
	UserInfo() { id = 1234; strcpy(name, "�̸�����"); }
	~UserInfo() { cout << "�Ҹ��ڸ� ȣ���մϴ�. " << endl; }

};

int main_Destory3()
{
	UserInfo mClass;

	mClass.SetID(4567);
	mClass.SetName("��ö��");

	cout << "id" << mClass.GetName() << endl;
	cout << "name" << mClass.GetName() << endl;
	return 0;
}