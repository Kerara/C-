//�߻�Ŭ���� _STUDENT
// protected int ID���� ������ �ֽ��ϴ�.
// �߻�޼ҵ� (���������Լ� ) int GetID(), void SetID(int value)�� ������ �ֽ��ϴ�.

// Ŭ���� SUJIN
// �߻�Ŭ���� _STUDENT�� ��� �޽��ϴ�.
// void Print()�Լ��� id�� ����մϴ�.
// ���������Լ� GetID, SetID()�� ���������ּ���

//��Ʈ�� ����Ʈ main���� SUJINŬ���� ��ü�� �����Ҵ��� �Ŀ� ID�� 1234�� �Է��ϰ�
//Print() �Լ��� ȣ���ؼ� ������ּ���!
// �޸� ����� �����ٸ� �����Ҵ��� �޸𸮸� �������ּ���!

#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

class _STUDENT
{
protected :
	int  ID;
public :
	virtual int GetID() = 0;
	virtual void SetID(int value) = 0;

};

class SUJIN : public _STUDENT
{
public :
	virtual void SetID(int value) { ID = value; }
	virtual int GetID() { return ID; }
	void Print()
	{
		cout << " ID" << ID << endl;

	}

};

int main_Abstractclass3()
{
	SUJIN* pSujin = new SUJIN;

	pSujin->SetID(1234);
	pSujin->Print();
	delete pSujin;
	return 0;
}