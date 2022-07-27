#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

class Parent
{
public:
	virtual void Print() = 0;
};

class Child : public Parent
{

public:
	virtual void Print() { cout << "child" << endl; }
};

class Child2 :public Parent
{
public:
	virtual void Print() { cout << "child2" << endl; }
};

int main()
{
	//dynamic_cast
	//run -time에 동적으로 형변환하는 캐스팅 연산자
	// 상속관곙를 캐스팅 할 수 있습니다.
	// dynamic_cast를 사용하기 위해서는 부모클래스가 반드시 추상메소드를 가지고 있어야합니다.
	//변환비용이 크기 때문에 static_cast를 사용해서 변환비용을 줄이는 것이 좋음
	
	Parent* pParent = new Child;
	Parent* pParent2 = new Child2;
	
	//static_cast / dynamic_cast
	//경적으로 형변환 ( 정확한 자료형을 알고 있을경우)
	Child* pChild2 = static_cast<Child*>(pParent2);
	pChild2->Print();

	

	//런타임에 동적으로 형변환 ( 자료형을 질의해봐야할 경우)
	//런타임 다형성 체크에 의해 Child가 아닌 객체들의 형변환 결과는 NULL을 반환
	Child* pchild3 = dynamic_cast<Child*>(pParent2);

	if (pchild3 != NULL) pchild3->Print();
	else cout << "pChild Null" << endl;

	//1. 정적으로 형변환(static_cast)
	Child2* pchild4 = static_cast<Child2*>(pParent2);
	pchild4->Print();

	// 2. 동적으로 형변환 (dynamic_cast)
	Child2* pChild5 = dynamic_cast<Child2*> (pParent2);

	if (pChild5 != NULL) pChild5->Print();
	else
		cout << "pChild5 Null" << endl;

	
	delete pParent;
	delete pParent2;
	
	return 0;
}