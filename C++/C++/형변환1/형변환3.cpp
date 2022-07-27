#include <iostream>
#pragma warning (disable : 4996)

using namespace std;

class Parent
{
public :
	int A = 1;

	void Print() { cout << " Parent" <<A<< endl; }
};

class Child : public Parent
{
public:
	int B = 2;
	void Print() { cout << " Child" <<B<< endl; }
};

class SampleClass
{
public:
	int A = 3;
	int B = 4;
	void Print() { cout << " sampleClass" << endl; }
};

int main_����ȯ3()
{
	//static_cast
	//compile-time (���α׷� ���� �� ������ �ϴ� ����) // run- time (���α׷��� �����ϰ� �ִ� �ð�)
	// compile-time�� �������� ����ȯ�ϴ� ĳ��Ʈ ������
	// ��Ӱ��踦 ĳ���� �� �� ������, Ŭ������ ��Ȯ�� �˰� ���� ��쿡 ����մϴ�.
	// ��ȯ ����� ���� ������ ���� ����մϴ�.
	//(dynamic_cast�� run-time�� üũ�մϴ�.)

	Parent mParent;
	Child* pChild = static_cast<Child*>(&mParent);
	pChild->Print();

	Child mchild;
	Parent* pParent = static_cast<Parent*>(&mchild);
	pParent->Print();

	SampleClass mSample;
	//Parent* pParent2 = static_cast<Parent*>(&mSample); //��� ���� �ƴ� �ٸ� Ŭ�������� ����ȯ�� �Ұ����մϴ�.

	return 0;
}