#include <iostream>
#include "샘플클래스3.h"

using namespace std;

int main_샘플클래스3()
{
	샘플클래스3  mClass;
	char		tempName[256];

	cout << "name";
	cin >> tempName;

	mClass.SetName(tempName);
	cout << "당신의 이름은 ?" << mClass.GetName() << "입니다 ." << endl;

	return 0;
}