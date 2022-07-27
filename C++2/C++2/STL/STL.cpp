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

	//�����̳�� �����ϱ� ���ؼ� �ݺ��� ����
	// �ݺ��ڴ� a�� ���� ���Ҹ� ����Ű�� ����
	vector<int> ::iterator iter = a.begin();

	cout << *iter << endl;

	//���� ���� (2��° ����)

	cout << iter[1] << endl;

	//+= ����
	cout << "[a�� 2��° ����]" << endl;
	iter += 1;
	cout << *iter << endl;

	cout << "[a�� ��� ����]" << endl;
	for (iter = a.begin(); iter != a.end(); ++iter)
	{
		cout << *iter << endl;

	}
	return 0;
}