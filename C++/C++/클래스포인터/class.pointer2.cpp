#include "샘플클래스.h"

int mainclass_pointer2()
{
	샘플클래스 mClass; //정적할당
	샘플클래스* pClass = &mClass; //mClass의 주소값을 참조 
	
	//참조변수?
	// 할당된 메모리를 참조하는 변수 
	샘플클래스& rClass = mClass; //참조변수

	cout << " name?";
	cin >> rClass.m_Name;

	cout << " score? ";
	cin >> rClass.m_Score;

	rClass.PrintRank();

	return 0;
}