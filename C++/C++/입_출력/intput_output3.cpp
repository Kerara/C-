//int �� ���� N �� M�� ���� ���� ���� �Է¹ް�
// ���� , ����, ���� , ������ ,������ ����� ������ּ���!

//input
//N?50
//M?30

//output
//���� : 80
// ���� : 20
// ���� : 1500
// ������ : 1.6666
// ������ : 20

#include <iostream>
using namespace std;

int main_put3()
{
	int N, M;

	cout << "N?";
	cin >> N;
	cout << "M?";
	cin >> M;

	cout.precision(2);
	cout << fixed;

	cout << "���� :" << N + M << endl;
	cout << "���� :" << N - M << endl;
	cout << "���� :" << N * M << endl;
	cout << "������ :" << (double)N / M << endl;
	cout << "������ :" << N % M << endl;

	return 0;

}