#include <iostream>
#include <vector>

using namespace std;

int main_STL()
{
	vector<int>a;
	
	a.push_back(10);
	a.push_back(20);
	a.push_back(30);
	a.push_back(40);
	a.push_back(50);

	//컨테이노로 접근하기 위해서 반복자 선언
	// 반복자는 a의 시작 원소를 가르키고 있음
	vector<int> ::iterator iter = a.begin();

	cout << *iter << endl;

	//임의 접근 (2번째 원소)

	cout << iter[1] << endl;

	//+= 연산
	cout << "[a의 2번째 원소]" << endl;
	iter += 1;
	cout << *iter << endl;

	cout << "[a의 모든 원소]" << endl;
	for (iter = a.begin(); iter != a.end(); ++iter)
	{
		cout << *iter << endl;

	}
	return 0;
}