//�л��� �̸�, ������ �Է¹ٰ� �̸��� �հ�, ����� ����ϴ� ���α׷��� �ۼ����ּ���!
//����, ���� ���� ������ �Է� �޽��ϴ�.
//(����� �Ҽ��� ��° �ڸ� ���� �Է����ּ���)

//input
// name? �㼺��
// kor? 50
// math? 30
// eng? 20

// output 
// �̸� : �㼺��
// ���� : 100
// ��� : 33.33

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

	cout << "�̸�" << name << endl;
	cout << "����" << (kor, math + eng) << endl;
	cout << "���" << (double)(kor + math + eng) << endl;
	return 0;
}