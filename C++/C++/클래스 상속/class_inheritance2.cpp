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
	C_CHILD() { Setkey(4567); } //C_CHILD생성자
	~C_CHILD() { if (m_pInfo != nullptr) { delete m_pInfo; m_pInfo = nullptr; } }
	void Setinfo(C_INFO* pinfo) { m_pInfo = pinfo; }
	C_INFO* Getimfo() { return m_pInfo; }


	void Print()
	{
		cout << "┌──────INFO─────────┐" << endl;
		cout << " ID" << GetKey() << endl;
		cout << " 이름 :" << m_pInfo->GetName() << endl;
		cout << "  나이 :" << m_pInfo->GetAge() << endl;
		cout << "└─────────────────┘" << endl;
	}
};

int mainclass_inheritance2()
{
	C_CHILD mChild; // 정적할당
	mChild.Setinfo(new C_INFO); //C_INFO 를 동적할당후 mChild의 m_pinfo에 참조

	char  tempName[256];
	int tempAge;

	cout << "이름을 입력해주세요 :";
	cin >> tempName;

	cout << " 나이를 입력해주세요 :";
	cin >> tempAge;

	//tempName과 tempAge를 mChild의 멤버 포인터 m_pinfo의 멤버  name 에 age에 넣어주세요
	mChild.Getimfo()->SetName(tempName);
	mChild.Getimfo()->SetAge(tempAge);

	mChild.Print();
	return 0;
}
