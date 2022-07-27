#include "샘플클래스.h"

int main_class_pointer()
{

	//할당되지 않은 포인터 변수에 동적할당한 메모리를 참조 시켜줍니다. (C+++ 동적할당 키워드 new)
	//동적할다아한 메모리의 사용이 끝났다면 반드시 해제 해주세여합니다 . (C++ 메모리 해제 키워드 delete)
	샘플클래스* pClass = new 샘플클래스;
	
	//이름 . 점수 입력받기 
	cout << "name?";
	cin >> pClass->m_Name;

	cout << "score";
	cin >> pClass->m_Score;

	//결과 출력
	pClass->PrintRank();

	
	
	delete pClass; // 메모리 해제

	return 0;
}