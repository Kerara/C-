#include <iostream>
#pragma warning (disable : 4996)

using namespace std;

class C_INFO
{
private:
	char name[256];
	int age;

public:
	void SetName(const char* value) { strcpy(name, value); }
	void SetAge(int valuer) { age = valuer; }
	
	char* GetName() { return name; }
	int GetAge() { return age; }
};

class C_PARENT
{
private:
	int secret_key;

public:
	C_PARENT() { secret_key = 1234;}
	void Setkey(int value) { secret_key = value; }
	int GetKey() { return secret_key; }
};

class C_CHILD : public C_PARENT
{
private:
	C_INFO* m_pInfo = nullptr;

public:
	C_CHILD() { Setkey(4567); } //C_CHILD������
	~C_CHILD() { if (m_pInfo != nullptr) { delete m_pInfo; m_pInfo = nullptr; } }
	void Setinfo(C_INFO* pinfo) { m_pInfo = pinfo; }
	C_INFO* Getimfo() { return m_pInfo; }


	void Print()
	{
		cout << "��������������INFO��������������������" << endl;
		cout << " ID" << GetKey() << endl;
		cout << " �̸� :" << m_pInfo->GetName() << endl;
		cout << "  ���� :" << m_pInfo->GetAge() << endl;
		cout << "��������������������������������������" << endl;
	}
};

int mainclass_inheritance2()
{
	C_CHILD mChild; // �����Ҵ�
	mChild.Setinfo(new C_INFO); //C_INFO �� �����Ҵ��� mChild�� m_pinfo�� ����

	char  tempName[256];
	int tempAge;

	cout << "�̸��� �Է����ּ��� :";
	cin >> tempName;

	cout << " ���̸� �Է����ּ��� :";
	cin >> tempAge;

	//tempName�� tempAge�� mChild�� ��� ������ m_pinfo�� ���  name �� age�� �־��ּ���
	mChild.Getimfo()->SetName(tempName);
	mChild.Getimfo()->SetAge(tempAge);

	mChild.Print();
	return 0;
}
