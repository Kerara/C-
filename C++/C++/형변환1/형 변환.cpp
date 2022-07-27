#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

class Parent
{
public:
	int A = 1;
	void Print() { cout << "Parent Print()" << A << endl; }
};

class Child : public Parent 
{
public :
	int B = 2;
	void Print() { cout << "Child Print()" << B << endl; }
};

class SampleClass
{
public :
	int A = 3;
	int B = 4;

	
};

int main_����ȯ()
{
	//����ȯ
	//��� ��ȯ // Ȯ�뺯ȯ

	//Ŭ����ũ��
	cout << " Parent Size :" << sizeof(Parent) << endl;
	cout << " Child Size :" << sizeof(Child) << endl;

	// C���� ����ȯ (type - id)(e-pression)
	// � �ڷ����̴� ������ �ٲ� �� �ֽ��ϴ�. (������ ĳ���� �Ұ���)

	//C++������ ����ȯ : static_cast<type-id>(e-pression)
	//1.static_cast : C�� ����ȯ�� �Ȱ��� ����ȯ(��ȯ��� ���� / ��Ȯ�� Ŭ������ �˰� �־���մϴ�.)
	//2.dynamic_cast : ���� ��۰��� / �ٿ�ĳ���� �� ���(��ȯ��� ŭ)
	//3.const_cast : ����� �ο� /����
	//4.reinterpret_cast: ������ Ÿ���� ����ȯ (��� ������ Ÿ�����δ� ��ȯ ����)

	//C��� ����ȯ
	// 1. Parent �����Ϳ� Parent Ŭ���� �Ҵ� ����
	Parent* p_Parnt = new Parent();
	p_Parnt->Print();

	//2.Child �����Ϳ� Child Ŭ���� �Ҵ� /����
	Child* p_Child = new Child();
	p_Child->Print();

	//3.Parent ������ Child Ŭ���� �Ҵ� (��� ��ȯ)
	Parent* p_Parent2 = new Child();
	p_Parent2->Print();

	//4.Child �����Ϳ� Parent Ŭ���� �Ҵ�(Ȯ�뺯ȯ)
	Child* p_childe2 = (Child*)new Parent();
	p_childe2->Print();

	//5. Child �����Ϳ� p_Parent2�� ����Ű�� �޸� ����
	Child* p_Childe3 = (Child*)p_Parent2;
	p_Childe3->Print();

	//6. Parent �����Ϳ� p_Child2�� ����
	Parent* p_Parent3 = p_childe2;
	p_Parent3->Print();

	//7. Child �����Ϳ� SamlpleClass ������ �Ҵ� /����
	Child* p_child4 = (Child*)new SampleClass;
	p_child4->Print();



	delete p_Parnt;
	delete p_Parent2;
	delete p_Child;
	delete p_childe2;

	return 0;
}