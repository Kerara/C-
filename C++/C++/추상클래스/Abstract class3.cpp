//추상클래스 _STUDENT
// protected int ID값을 가지고 있습니다.
// 추상메소드 (순수가상함수 ) int GetID(), void SetID(int value)를 가지고 있습니다.

// 클래스 SUJIN
// 추상클래스 _STUDENT를 상속 받습니다.
// void Print()함수는 id를 출력합니다.
// 순수가상함수 GetID, SetID()를 재정의해주세요

//엔트리 포인트 main에서 SUJIN클래스 객체를 동적할당한 후에 ID에 1234를 입력하고
//Print() 함수를 호출해서 출력해주세요!
// 메모리 사용이 끝났다면 동적할당한 메모리를 해제해주세요!

#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

class _STUDENT
{
protected :
	int  ID;
public :
	virtual int GetID() = 0;
	virtual void SetID(int value) = 0;

};

class SUJIN : public _STUDENT
{
public :
	virtual void SetID(int value) { ID = value; }
	virtual int GetID() { return ID; }
	void Print()
	{
		cout << " ID" << ID << endl;

	}

};

int main_Abstractclass3()
{
	SUJIN* pSujin = new SUJIN;

	pSujin->SetID(1234);
	pSujin->Print();
	delete pSujin;
	return 0;
}