//����̶�?
//�θ�Ŭ���� ����� �ڽ� Ŭ������ ����ϴ°�

#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

//�θ�Ŭ���� 
class C_HEAD
{
	//����������
	//public : ��𼭵� ������ ����
	//protected : �ڱ��ڽŰ� ��� ���� Ŭ���������� ������ ����
	//private :�ڱ� �ڽŸ� ������ ����
protected:
	int  m_IQ = 70;
public:
	int GetIQ() { return m_IQ; }
};


//�ڽ�Ŭ����
//C_BODY�� C_HEAD�� ��ӹް� �ֽ��ϴ�. (�ڽ�Ŭ����)
class C_BODY : public C_HEAD
{
public:
	int m_Height;
	int m_Weight;

public:

	//�����ε��?
	//���� Ŭ���� ���� �̸��� ���� �޼ҵ带 �ٸ� ������� ����ϰ� ������ִ� ���
	//(���ڰ��� �ڷ����̳� , ���ڰ��� ������ �ٸ��� �����ؾ��մϴ�.)
	int GetHeadIQ() { return m_IQ; }
	int GetHeadIQ(int add) { return m_IQ + add; }
	void GetHeadIQ(const char* name) { cout << name << "���� IQ�� " << m_IQ << endl; }
	//�������̵�� ?
	int   GetIQ() { return 0; }
};



int main_inheritance()
{

	cout << "C_HEAD�� ũ��?" << sizeof(C_HEAD) << endl;
	cout << "C_BOdY�� ũ��?" << sizeof(C_BODY) << endl;
	
	C_BODY mBody;
	C_HEAD mHead;

	cout << "C_HEAD�� GetIQ" << mHead.GetIQ() << endl;
	cout << "C_BODY�� GetIQ" << mBody.GetIQ() << endl;

	cout << "C_BODY�� GetHeadIQ?" << mBody.GetHeadIQ() << endl;
	cout << "C_BODY�� GetHEadIQ(int add)" << mBody.GetHeadIQ(100) << endl;
	mBody.GetHeadIQ("������");
	return 0;
}