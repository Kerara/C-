#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

int main_형변환2()
{
	//const_cast
	// 상수성 부여 / 상수성 제거 
	
	//1. 상수성 부여
	char mArry[] = "Hello";
	char mArry2[] = "World";

	//1.const int * p
	// - 포인터가 가르키는 값을 바꿀 수 없습니다.
	// - 다른 메모리를 참조하도록 설정 가능

	//2. int * const p
	// - 포인터가 가르키는 값을 바꿀 수 있습니다.
	// - 다른 메모리를 참조하도록 설정 불가능

	//3. const int * const p
	// - 포인터가 가르키는 값을 바꿀 수 없습니다.
	// - 다른 메모리를 참조하도록 설정 불가능

	const char* pChar = const_cast<char*>(mArry);
	//pChar[0] = 'A'; // pChar가 참조하는 메모리의 값의 변경은 불가능
	pChar = mArry2;   //pChar가 다른 메모리를 참조하도록 설정 가능

	char* const pChar2 = mArry;
	pChar2[0] = 'A';  //pChar가 참조하는 메모리의 값의 변경의 가능 
	//pChar2 = mArray2; //pChar2가 다른 메모리 참조하도록 설정 불가능

	//2.상수성 제거
	const char mArray3[] = "ABCDEF";	
	char* pChar3 = const_cast<char*>(mArray3);
	
	
	//mArray3[0] = 'Z'; //문자열 상수이기 때문에 값의 변경이 불가능
	pChar3[0] = 'Z';	//상수성이 제거되었이 때문에 값의 변경이 가능
	
	
	cout << pChar3 << endl;



	return 0;
}