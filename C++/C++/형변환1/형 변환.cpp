#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

class Parent
{
public:
	int A = 1;
	void Print() { cout << "Parent Print()" << A << endl; }
};

class Child : public Parent 
{
public :
	int B = 2;
	void Print() { cout << "Child Print()" << B << endl; }
};

class SampleClass
{
public :
	int A = 3;
	int B = 4;

	
};

int main_형변환()
{
	//형변환
	//축소 변환 // 확대변환

	//클래스크기
	cout << " Parent Size :" << sizeof(Parent) << endl;
	cout << " Child Size :" << sizeof(Child) << endl;

	// C언어에서 형봔환 (type - id)(e-pression)
	// 어떤 자료형이던 강제로 바꿀 수 있습니다. (셈심한 캐스팅 불가능)

	//C++에서의 형변환 : static_cast<type-id>(e-pression)
	//1.static_cast : C언 형변환과 똑같은 형봔환(변환비요 저렴 / 명확한 클래스를 알고 있어야합니다.)
	//2.dynamic_cast : 동적 상송관계 / 다운캐스팅 시 사용(변환비용 큼)
	//3.const_cast : 상수성 부여 /해제
	//4.reinterpret_cast: 포인터 타입의 형변환 (어떠한 포인터 타입으로는 변환 가능)

	//C언어 형변환
	// 1. Parent 포인터에 Parent 클래스 할당 참조
	Parent* p_Parnt = new Parent();
	p_Parnt->Print();

	//2.Child 포인터에 Child 클래스 할당 /참조
	Child* p_Child = new Child();
	p_Child->Print();

	//3.Parent 포인터 Child 클래스 할당 (축소 변환)
	Parent* p_Parent2 = new Child();
	p_Parent2->Print();

	//4.Child 포인터에 Parent 클래스 할당(확대변환)
	Child* p_childe2 = (Child*)new Parent();
	p_childe2->Print();

	//5. Child 포인터에 p_Parent2가 가르키는 메모리 참조
	Child* p_Childe3 = (Child*)p_Parent2;
	p_Childe3->Print();

	//6. Parent 포인터에 p_Child2를 참조
	Parent* p_Parent3 = p_childe2;
	p_Parent3->Print();

	//7. Child 포인터에 SamlpleClass 포인터 할당 /참조
	Child* p_child4 = (Child*)new SampleClass;
	p_child4->Print();



	delete p_Parnt;
	delete p_Parent2;
	delete p_Child;
	delete p_childe2;

	return 0;
}