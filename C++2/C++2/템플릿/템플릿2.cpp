//int�� ���� N,M /float�� ���� O,P�� ������ ���� �Է��ϰ�
//���ø��� ����ؼ� �հ踦 ���� ����ϴ� ���α׷��� �ۼ����ּ���.
//�Ҽ����� ��°�ڸ����� ������ּ���.

#include <iostream>
#pragma warning (disable : 4996)

using namespace std;

template<typename T>

T Sum(T& arg1, T& arg2)
{
	return arg1 + arg2;
}

int main_���ø�2()
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

	cout << "N,M���հ�?" << Sum(N, M) << endl;
	cout.precision(2);
	cout << fixed << "O,P�� �հ�?" << Sum(O, P) << endl;

	return 0;
}