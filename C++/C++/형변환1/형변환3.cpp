#include <iostream>
#pragma warning (disable : 4996)

using namespace std;

class Parent
{
public :
	int A = 1;

	void Print() { cout << " Parent" <<A<< endl; }
};

class Child : public Parent
{
public:
	int B = 2;
	void Print() { cout << " Child" <<B<< endl; }
};

class SampleClass
{
public:
	int A = 3;
	int B = 4;
	void Print() { cout << " sampleClass" << endl; }
};

int main_형변환3()
{
	//static_cast
	//compile-time (프로그램 구동 전 컴파일 하는 구간) // run- time (프로그램이 동작하고 있는 시간)
	// compile-time에 경적으로 형변환하는 캐스트 연산자
	// 상속관계를 캐스팅 할 수 있으며, 클래스를 정확히 알고 있을 경우에 사용합니다.
	// 변환 비용이 적기 때문에 자주 사용합니다.
	//(dynamic_cast는 run-time에 체크합니다.)

	Parent mParent;
	Child* pChild = static_cast<Child*>(&mParent);
	pChild->Print();

	Child mchild;
	Parent* pParent = static_cast<Parent*>(&mchild);
	pParent->Print();

	SampleClass mSample;
	//Parent* pParent2 = static_cast<Parent*>(&mSample); //상속 관계 아닌 다른 클래스간의 형변환은 불가능합니다.

	return 0;
}