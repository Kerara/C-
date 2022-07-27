//학생의 이름, 성적을 입력바고 이름과 합계, 평균을 출력하는 프로그램을 작성해주세요!
//국어, 수학 영어 점수를 입력 받습니다.
//(평균은 소수점 둘째 자리 까지 입력해주세요)

//input
// name? 허성준
// kor? 50
// math? 30
// eng? 20

// output 
// 이름 : 허성준
// 총점 : 100
// 평균 : 33.33

#include <iostream>
#include <string>

using namespace std;

int main_put4()
{
	string name;
	int kor, math, eng;

	cout << " name?";
	getline(cin, name);

	cout << "kor";
	cin >> kor;

	cout << "math";
	cin >> math;

	cout << "eng";
	cin >> eng;

	cout << fixed;
	cout.precision(2);

	cout << "이름" << name << endl;
	cout << "총점" << (kor, math + eng) << endl;
	cout << "평균" << (double)(kor + math + eng) << endl;
	return 0;
}