#include <iostream>
#include "샘플클래스2.h"

using namespace std;

int main_샘플클래스2()
{
	샘플클래스2 mClass;

	//mClsass의 secret_key를 100으로 변경
	mClass.SetKey(100);

	//mClass의 secret_key를 출력
	cout << mClass.Getkey() << endl;
	return 0;
}