#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

void main_형변환_1()
{
	//reinterpret_cast
	//어떠한 포인터 타입도 어떠한 포인터 타입으로 형변환 가능
	// ex) int* -> char* // char* -> int*

	//강력한 게스트 연산자지만 강제 형변환되기 때문에 변혼관께에 놓인 두 개첵의 관계가
	//명확하거나 특정 목적을 달성하기 위할 때만 사용하는 것이 바람직합니다.

	//컴파일 성공 ( 주소값 유호 체크 하지 않음) [&을 붙여주셔야합니다.]
	int N = 65;
	char* pArray = reinterpret_cast<char*>(&N);

	cout << pArray << endl;

	const char* parray2 = "Hello";
	int m = reinterpret_cast<int>(parray2);

	//컴파일 성공 pArray2의 시작 주소값 출력
	cout << m << endl;
	
	// 시작 주소값을 char* mChar안에 넣어서 '\O'문자까지 출력
	char* mChar = reinterpret_cast<char*>(m);
	cout << mChar << endl;

	//static_cast 사용 (함수처럼 임시변수 반환)
	int A = 10;
	//float* B = static_cast<float*>(&A); //사용 불가능
	float B = static_cast<float>(A);	//사용 가능 (일반 자료형 형변환 가능)

	//reinterpret_cast 사용 (캐스팅되는 개체를 변경)
	int C = 10;
	float* D = reinterpret_cast<float*>(&C); //사용가능 (결과값을 알 수 없음)
	//float D = reinterpret_cast<float>(C);   //사용 불가능  (일반 자료형끼리의 형변환 불가능)

}