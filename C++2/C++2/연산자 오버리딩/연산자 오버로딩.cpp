// ������ �����ε��̶�?
// Ŭ������ ����� �� �����ڸ� Ŭ������ �����ε� �Ͽ� �پ��ϰ� ����ϴ� ����

//������ �����ε� ����
// �Ҵ翬����			=
// ���� ��� ������		+,-,*,/	
// ���� �Ҵ� ������		+=,-=,*=,/=
// �� ������			==,!=

//��������� / ������Կ�����


//��������ڶ�?
// � ��ü�� �ʱ�ȭ�� ���� ���� Ÿ���� �ٸ� ��ü�� ����� �� ȣ��Ǵ� �Լ�

// ���� ���Կ����ڶ�?
// ���� Ÿ���� �ٸ� ��ü�� ���� ������ �� ȣ��Ǵ� �Լ�

//���� ������ / ���� ���Կ����ڸ� �������� �ʴ��� �⺻������ ���縦 ������,
// ������ ���� ( �����Ҵ��� �޸𸮵� ����)�� ������ �ʱ� ������ �����ϴ� ������ ���̸� ����

#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

class SampleClass
{

private:
	int* private_key = nullptr;
public:
	int key;

	void SetPrivatKey(int* value) { private_key = value; }
	int GetPrivatKey() { return *private_key; }
	SampleClass() {} //�Ϲ� ������
	~SampleClass() { delete private_key; } //�Ϲ� �Ҹ���
	
	SampleClass(const SampleClass& ref)
	{
		cout << "��������� ȣ��" << endl;
		private_key = new int(*ref.private_key);
		key = ref.key;

	}
	
	SampleClass& operator = (const SampleClass &ref)
	{
		cout << "���� ���Կ����� ȣ��" << endl;
		if (private_key == nullptr)
			private_key = new int(*ref.private_key);
		else
			*private_key = *ref.private_key;

		key = ref.key;

		return *this;
	}
};

int main_�����ڿ����ε�()
{
	SampleClass A;
	SampleClass B;
	A.key = 10;
	A.SetPrivatKey(new int(30));
	B.key = 20;
	B.SetPrivatKey(new int(40));

	SampleClass C; //���� ������
	C = A;				//���� ���� ������

	SampleClass D(B); //���� ������

	cout << "A key?" << A.key << endl;
	cout << "A private_key?" << A.GetPrivatKey()<< endl;

	cout << "B key" << B.key << endl;
	cout << "B private_key?" << B.GetPrivatKey() << endl;

	cout << "C key?" << C.key << endl;
	cout << "C private_key?" << C.GetPrivatKey() << endl;

	cout << "D key?" << D.key << endl;
	cout << "D private_key?" << D.GetPrivatKey() << endl;

	return 0;
}
