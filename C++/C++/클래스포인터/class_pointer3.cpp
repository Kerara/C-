//샘플클래스.h파일을 선언하고 
//샘플클래스 변수 c_Class,y_Class를 동적할당해주세요 !(new)
//c_Class, y_Class의 이름과 점수를 입력하고 
//둘 중 누가 더 높은 점수를 받았는지 결과를 출력해주세요 !
// 작업이 끝난 후에는 메모리를 해제해주세요

//input
// name?  점수
// score? 65
// name? 영희
// score? 85

//output
// 영희의 점수가 철수의 점수보다 높습니다.

// +a
// 영희의 점수가 철수의 점수보다 20점 더 높습니다. 

#include "샘플클래스.h"
#pragma warning (disable : 4996)

int main_class_poiner3()
{
	샘플클래스* c_Class = new 샘플클래스;
	샘플클래스* y_Class = new 샘플클래스;

	cout << "name?";
	cin >> c_Class->m_Name;

	cout << "score?";
	cin >> c_Class->m_Score;

	cout << "name?";
	cin >> y_Class->m_Name;

	cout << "score?";
	cin >> y_Class->m_Score;

	//1.c_Class의 점수가 y_Class의 점수보다 높다면
	if (c_Class->m_Score > y_Class->m_Score)
	{
		cout << c_Class->m_Name << "의 점수가" << y_Class->m_Name << "의점수보다"
			<< c_Class->m_Score - y_Class->m_Score << "점 더 높습니다."<<endl;
	}
	//2 c_Class의 점수가 y_Class의 점수보다 낮다면
	else if (c_Class->m_Score < y_Class->m_Score)
	{
		cout << y_Class->m_Name << "의 점수가" << c_Class->m_Name << "의점수보다"
			<< y_Class->m_Score - c_Class->m_Score << "점 더 높습니다." << endl;
	}

	//3. 두점수가 같다면
	else
	{
		cout << c_Class->m_Name << "의 점수와" << y_Class->m_Name << "의 점수가 같습니다." << endl;
	}
	//동적할당한 메모리를 해제해줍니다.

	delete c_Class;
	delete y_Class;
	return 0;

}
