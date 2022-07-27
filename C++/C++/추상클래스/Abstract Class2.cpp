#include <iostream>
#include <combaseapi.h>
#pragma warning (disable : 4996)

using namespace std;

//인터페이스 _Student
interface _Student
{
	virtual void SetID(int value) = 0;
	virtual void SetName(char* value) = 0;
	virtual void SetAge(int value) = 0;

	virtual int  GetID() = 0;
	virtual char* GetName() = 0;
	virtual int GetAGe() = 0;

};

class AbstacrStudent : public _Student
{
protected :
	int m_StudentID;
	char m_StudentName[256];
	int m_StudentAge;
public:
	void Print()
	{
		cout << "┌─────Info─────┐" << endl;
		cout << " ID  :" << m_StudentID << endl;
		cout << " 이름 :" << m_StudentName << endl;
		cout << " 나이 :" << m_StudentAge << endl;
		cout << "└────────────┘" << endl;

	}
};

class Y_class : public AbstacrStudent
{
public :

	virtual void SetID(int value)  {  m_StudentID = value; }
	virtual void SetName(char* value) { strcpy(m_StudentName, value); }
	virtual void SetAge(int value) { m_StudentAge = value; }

	virtual int  GetID() { return m_StudentID; }
	virtual char* GetName() { return m_StudentName; }
	virtual int GetAGe() { return m_StudentAge; }

};

int main_Abstractclass2()
{
	Y_class mClass;

	int tempID;
	char tempName[256];
	int tempAge;

	cout << "id ?";
	cin >> tempID;

	cout << "name ?";
	cin >> tempName;

	cout << "age ?";
	cin >> tempAge;

	mClass.SetID(tempID);
	mClass.SetName(tempName);
	mClass.SetAge(tempAge);

	mClass.Print();

	return 0;
}