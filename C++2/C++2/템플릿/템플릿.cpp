// 템플릿이란?
//'형틀' 이라는 의미를 지니고 있으면 들어가는 객체에 따라 결과가 조금씩 달라짐
// ex) template<typename T>

// 1. 함수템플릿
// 2. 클래스 템플릿
// 3. 템플릿 연산자

#include <iostream>
#pragma warning (disable : 4996)

using namespace std;

//1 .함수 템플릿
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

	//3. 템플릿  연산자
	T operator > (T& arg)
	{
		return (_data > arg) ? _data : arg;

	}

};
int main_템플릿()
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
	cout << "A와 value중 더 큰 값은 ?" << (A > value) << endl;

	return 0;
}
