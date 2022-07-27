//학생 성적관리 프로그램

//학생관리 클래스 
// private 변수 int score , int id를 가지고 있습니다 .
// score , id의  getter, setter를 만들어 주세요.

// 엔트리 포인트 main에서 학생관리 클래스 배열(5개)를 만들고 score, id를 입력받습니다. 
// 그 후 학생들의 총점 , 가장 높은 점수를 받은 학생의 id와 점수를 출력해주세요 .
// 소수점은 둘째 자리까지 표시합니다. 

//output 
// chdwja : 385
// 평균 : 72.22
// 가장 높은 점수를 받은 학생 ID : 123
// 가장 높은 점수를 받은 학생의 점수 : 99
#include <iostream>
#include "샘플클래스4.h"

using namespace std;

void main_샘플클래스4 ()
{
	샘플클래스4 mClass[5];

	int tempID;
	int tempScore;

	//1.학생정보 입력
	for (int i = 0; i < 5; i++)
	{
		cout << "id ?";
		cin >> tempID;

		cout << "score ?";
		cin >> tempScore;

		mClass[i].SetID(tempID);
		mClass[i].SetScore(tempScore);

	}

	//2. 학생 정보 연산 (총점 , 평군 , 최고점수 )
	int sum = 0;
	double avg = 0;
	int maxIndex = 0;

	for (int i = 0; i < 5; i++)
	{
		//총점 구하기 
		sum += mClass[i].GetSCore();

		//최고 점수 학생 인덱스 구하기 
		if (mClass[maxIndex].GetSCore() < mClass[i].GetSCore())
			maxIndex = i;
	}

	avg = (double)sum / 5;

	//3. 학생정보 출력 
	// 소수점 자리 설정 (2.번째 자리까지)
	cout << fixed;
	cout.precision(2);

	cout << " 총점 :" << sum << endl;
	cout << " 평균 :" << avg << endl;
	cout << "가장 높은 점수를 받은 학생 ID : " << mClass[maxIndex].GetID() << endl;
	cout << "가장 높은 점수를 받은 학생 점수 :" << mClass[maxIndex].GetSCore() << endl;
}