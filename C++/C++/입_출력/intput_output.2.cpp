#include <iostream>
#include <iomanip>
//std ���ӽ����̽��� ����մϴ�. !

using namespace std;

int main_put2()
{
	// �Ҽ��� �ڸ� ���� (2��° �ڸ� �ݿø�)
	setprecision(2); // ���� +�Ҽ� �������� ���ڸ��� �ݿø� ( ����ϱ� ���ؼ� iomanip ����)
	cout.precision(2);  // ���� + �Ҽ� �������� ���ڸ��� �ݿø�
	cout << fixed; //fixed�� ����� ��� �Ҽ��� �ڸ����� �������� �ݿø�

	double N = 123.45678;
	cout << N << endl;

	double M = 456.789;
	cout.unsetf(ios::fixed); //fixed ����
	cout << setprecision(4) << M << endl;


	return 0;
}