#include <iostream>
#include "����Ŭ����2.h"

using namespace std;

int main_����Ŭ����2()
{
	����Ŭ����2 mClass;

	//mClsass�� secret_key�� 100���� ����
	mClass.SetKey(100);

	//mClass�� secret_key�� ���
	cout << mClass.Getkey() << endl;
	return 0;
}