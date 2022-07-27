//상속이란?
//부모클랫의 멤버를 자식 클래스가 사용하는것

#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

//부모클래스 
class C_HEAD
{
	//접근제어자
	//public : 어디서든 접근이 가능
	//protected : 자기자신과 상속 받은 클래스에서만 접근이 가능
	//private :자기 자신만 접근이 가능
protected:
	int  m_IQ = 70;
public:
	int GetIQ() { return m_IQ; }
};


//자식클래스
//C_BODY는 C_HEAD를 상속받고 있습니다. (자식클래스)
class C_BODY : public C_HEAD
{
public:
	int m_Height;
	int m_Weight;

public:

	//오버로드란?
	//같은 클래스 내의 이름의 같은 메소드를 다른 기능으로 사용하게 만들어주는 기능
	//(인자값의 자료형이나 , 인자값의 개수를 다르게 설정해야합니다.)
	int GetHeadIQ() { return m_IQ; }
	int GetHeadIQ(int add) { return m_IQ + add; }
	void GetHeadIQ(const char* name) { cout << name << "님의 IQ는 " << m_IQ << endl; }
	//오버라이드란 ?
	int   GetIQ() { return 0; }
};



int main_inheritance()
{

	cout << "C_HEAD의 크기?" << sizeof(C_HEAD) << endl;
	cout << "C_BOdY의 크기?" << sizeof(C_BODY) << endl;
	
	C_BODY mBody;
	C_HEAD mHead;

	cout << "C_HEAD의 GetIQ" << mHead.GetIQ() << endl;
	cout << "C_BODY의 GetIQ" << mBody.GetIQ() << endl;

	cout << "C_BODY의 GetHeadIQ?" << mBody.GetHeadIQ() << endl;
	cout << "C_BODY의 GetHEadIQ(int add)" << mBody.GetHeadIQ(100) << endl;
	mBody.GetHeadIQ("강아지");
	return 0;
}