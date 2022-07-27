//int형 변수 N,M /float형 변수 O,P에 임의의 값을 입력하고
//템플릿을 사용해서 합계를 구해 출력하는 프로그램을 작성해주세요.
//소수점은 둘째자리까지 출력해주세요.

#include <iostream>
#pragma warning (disable : 4996)

using namespace std;

template<typename T>

T Sum(T& arg1, T& arg2)
{
	return arg1 + arg2;
}

int main_템플릿2()
{
	int N, M;
	float O, P;

	cout << "N?";
	cin >> N;

	cout << "M?";
	cin >> M;

	cout << "O?";
	cin >> O;

	cout << "P?";
	cin >> P;

	cout << "N,M의합계?" << Sum(N, M) << endl;
	cout.precision(2);
	cout << fixed << "O,P의 합계?" << Sum(O, P) << endl;

	return 0;
}