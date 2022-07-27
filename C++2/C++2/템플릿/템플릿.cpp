// ���ø��̶�?
//'��Ʋ' �̶�� �ǹ̸� ���ϰ� ������ ���� ��ü�� ���� ����� ���ݾ� �޶���
// ex) template<typename T>

// 1. �Լ����ø�
// 2. Ŭ���� ���ø�
// 3. ���ø� ������

#include <iostream>
#pragma warning (disable : 4996)

using namespace std;

//1 .�Լ� ���ø�
template<typename T>
void Swap(T& arg1, T& arg2)
{
	T temp = arg1;
	arg1 = arg2;
	arg2 = temp;

}

template<typename T>
class SampleClass
{
private:
	T  _data;
public:

	T  GetDate() { return _data;}
	void SetData(T arg) { _data = arg; }

	//3. ���ø�  ������
	T operator > (T& arg)
	{
		return (_data > arg) ? _data : arg;

	}

};
int main_���ø�()
{
	int N  =10, M = 20;
	Swap(N, M);

	cout << N << "," << M << endl;

	SampleClass<int> A;
	A.SetData(10);

	SampleClass<char> B;
	B.SetData('A');

	SampleClass<float> C;
	C.SetData(123.456f);

	cout << "A data?" << A.GetDate() << endl;
	cout << "B data?" << B.GetDate() << endl;
	cout << "C data?" << C.GetDate() <<endl;

	int value = 20;
	cout << "A�� value�� �� ū ���� ?" << (A > value) << endl;

	return 0;
}
