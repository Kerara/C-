#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

int main_����ȯ2()
{
	//const_cast
	// ����� �ο� / ����� ���� 
	
	//1. ����� �ο�
	char mArry[] = "Hello";
	char mArry2[] = "World";

	//1.const int * p
	// - �����Ͱ� ����Ű�� ���� �ٲ� �� �����ϴ�.
	// - �ٸ� �޸𸮸� �����ϵ��� ���� ����

	//2. int * const p
	// - �����Ͱ� ����Ű�� ���� �ٲ� �� �ֽ��ϴ�.
	// - �ٸ� �޸𸮸� �����ϵ��� ���� �Ұ���

	//3. const int * const p
	// - �����Ͱ� ����Ű�� ���� �ٲ� �� �����ϴ�.
	// - �ٸ� �޸𸮸� �����ϵ��� ���� �Ұ���

	const char* pChar = const_cast<char*>(mArry);
	//pChar[0] = 'A'; // pChar�� �����ϴ� �޸��� ���� ������ �Ұ���
	pChar = mArry2;   //pChar�� �ٸ� �޸𸮸� �����ϵ��� ���� ����

	char* const pChar2 = mArry;
	pChar2[0] = 'A';  //pChar�� �����ϴ� �޸��� ���� ������ ���� 
	//pChar2 = mArray2; //pChar2�� �ٸ� �޸� �����ϵ��� ���� �Ұ���

	//2.����� ����
	const char mArray3[] = "ABCDEF";	
	char* pChar3 = const_cast<char*>(mArray3);
	
	
	//mArray3[0] = 'Z'; //���ڿ� ����̱� ������ ���� ������ �Ұ���
	pChar3[0] = 'Z';	//������� ���ŵǾ��� ������ ���� ������ ����
	
	
	cout << pChar3 << endl;



	return 0;
}