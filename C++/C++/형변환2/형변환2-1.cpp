#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

void main_����ȯ_1()
{
	//reinterpret_cast
	//��� ������ Ÿ�Ե� ��� ������ Ÿ������ ����ȯ ����
	// ex) int* -> char* // char* -> int*

	//������ �Խ�Ʈ ���������� ���� ����ȯ�Ǳ� ������ ��ȥ������ ���� �� ��ý�� ���谡
	//��Ȯ�ϰų� Ư�� ������ �޼��ϱ� ���� ���� ����ϴ� ���� �ٶ����մϴ�.

	//������ ���� ( �ּҰ� ��ȣ üũ ���� ����) [&�� �ٿ��ּž��մϴ�.]
	int N = 65;
	char* pArray = reinterpret_cast<char*>(&N);

	cout << pArray << endl;

	const char* parray2 = "Hello";
	int m = reinterpret_cast<int>(parray2);

	//������ ���� pArray2�� ���� �ּҰ� ���
	cout << m << endl;
	
	// ���� �ּҰ��� char* mChar�ȿ� �־ '\O'���ڱ��� ���
	char* mChar = reinterpret_cast<char*>(m);
	cout << mChar << endl;

	//static_cast ��� (�Լ�ó�� �ӽú��� ��ȯ)
	int A = 10;
	//float* B = static_cast<float*>(&A); //��� �Ұ���
	float B = static_cast<float>(A);	//��� ���� (�Ϲ� �ڷ��� ����ȯ ����)

	//reinterpret_cast ��� (ĳ���õǴ� ��ü�� ����)
	int C = 10;
	float* D = reinterpret_cast<float*>(&C); //��밡�� (������� �� �� ����)
	//float D = reinterpret_cast<float>(C);   //��� �Ұ���  (�Ϲ� �ڷ��������� ����ȯ �Ұ���)

}