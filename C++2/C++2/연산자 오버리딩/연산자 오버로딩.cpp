// 연산자 오버로딩이란?
// 클래스를 사용할 때 연산자를 클래스에 오버로드 하여 다양하게 사용하는 가능

//연산자 오버로드 종류
// 할당연산자			=
// 이진 산술 연산자		+,-,*,/	
// 복합 할당 연산자		+=,-=,*=,/=
// 비교 연산자			==,!=

//복사생성자 / 복사대입연산자


//복사생성자란?
// 어떤 객체의 초기화를 위해 같은 타입의 다른 객체를 사용할 때 호출되는 함수

// 복사 대입연산자란?
// 같은 타입의 다른 객체의 값을 복사할 때 호출되는 함수

//복사 생성자 / 복사 대입연사자를 정의하지 않더라도 기본적으로 복사를 하지만,
// 정교한 복사 ( 동적할당한 메모리도 복사)를 해주지 않기 때문에 정의하는 습관을 들이면 좋음

#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

class SampleClass
{

private:
	int* private_key = nullptr;
public:
	int key;

	void SetPrivatKey(int* value) { private_key = value; }
	int GetPrivatKey() { return *private_key; }
	SampleClass() {} //일반 생성자
	~SampleClass() { delete private_key; } //일반 소멸자
	
	SampleClass(const SampleClass& ref)
	{
		cout << "복사생성자 호출" << endl;
		private_key = new int(*ref.private_key);
		key = ref.key;

	}
	
	SampleClass& operator = (const SampleClass &ref)
	{
		cout << "복사 대입연산자 호출" << endl;
		if (private_key == nullptr)
			private_key = new int(*ref.private_key);
		else
			*private_key = *ref.private_key;

		key = ref.key;

		return *this;
	}
};

int main_연산자오버로딩()
{
	SampleClass A;
	SampleClass B;
	A.key = 10;
	A.SetPrivatKey(new int(30));
	B.key = 20;
	B.SetPrivatKey(new int(40));

	SampleClass C; //복사 생성자
	C = A;				//복사 대입 연산자

	SampleClass D(B); //복사 생성자

	cout << "A key?" << A.key << endl;
	cout << "A private_key?" << A.GetPrivatKey()<< endl;

	cout << "B key" << B.key << endl;
	cout << "B private_key?" << B.GetPrivatKey() << endl;

	cout << "C key?" << C.key << endl;
	cout << "C private_key?" << C.GetPrivatKey() << endl;

	cout << "D key?" << D.key << endl;
	cout << "D private_key?" << D.GetPrivatKey() << endl;

	return 0;
}
