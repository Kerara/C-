#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

class Sampleclass
{
private :
	int key = 0;
public :
	void SetKey(int value) { key = value; }
	int GetKey() { return key; }


	// 두 key값이 0보다 크다면 , 현재 클래스의 key값과 참조변수 b의 key값이 교환되게
	bool operator = (Sampleclass& b)
	{
		if (key <= 0 || b.key <= 0)
			return false;

		int value = key;
		key = b.key;
		b.key = value;
		return true;

	}

};
	
int main_연산자오버로딩2()
	{
		Sampleclass N, M;
		N.SetKey(1234);
		M.SetKey(4567);

		if (N = M)
		{
			cout << "N.GetKey()?" << N.GetKey() << endl;
			cout << "M.GetKey()?" << M.GetKey() << endl;

		}
		else
		{
			cout << "N의 key나 M의 값이 0 보다 작거나 같습니다." << endl;

		}
		return 0;
}