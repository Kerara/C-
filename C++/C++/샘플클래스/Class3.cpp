#include <iostream>
#include "����Ŭ����3.h"

using namespace std;

int main_����Ŭ����3()
{
	����Ŭ����3  mClass;
	char		tempName[256];

	cout << "name";
	cin >> tempName;

	mClass.SetName(tempName);
	cout << "����� �̸��� ?" << mClass.GetName() << "�Դϴ� ." << endl;

	return 0;
}