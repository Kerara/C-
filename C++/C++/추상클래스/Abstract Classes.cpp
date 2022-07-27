//�߻�Ŭ������?
// �߻�޼ҵ带 ������ �ִ� Ŭ����

// �߻� �޼ҵ� (���������Լ�)��?
// �θ�Ŭ�������� ������ �����Լ��� �ڽ�Ŭ���¿��� �ݵ�� �������ϵ��� ������ �� (������)

//�������̽���?
//�߻�޼ҵ�θ� �����Ǿ��ִ� Ŭ����

#include <iostream>
#pragma warning(disable : 4996)

using namespace std;
class Shape
{
private :
	int width;
	int height;

public :
	void SetWidth(int value) { width = value; }
	void SetHeight(int value) { height = value; }

	int GetWidth() { return width; }
	int GetHeight() { return height; }

	//virtual Ű���带 ����ؼ� �߹�޼ҵ带 ������ �� ������
	//�߻� �޼ҵ带 ������ �ִ� Ŭ������ �߻�Ŭ������� �մϴ�.
	// �߻�Ŭ������ ��ӹ޴� �ڽ�Ŭ�������� �ݵ�� �߻� �޼ҵ带 �� ����������մϴ�. (��Ģ)
	// �߻�Ŭ������ �� Ŭ���� ��ü�� ��ü (�ν��Ͻ�)�� ������ �� �����ϴ�.

	virtual void PrintArea() = 0; //���̸� ����ϴ� �Լ� (�߻�޼ҵ�)
};

class Rectangle : public Shape
{
public :
	virtual void PrintArea()
	{
		cout << "�簢���� ���� :" << GetWidth() * GetHeight() << endl;
	}

};

class Triangle : public Shape
{
public :
	virtual void PrintArea()
	{
		cout << "�ﰢ���� ���� : " << GetWidth() * GetHeight() / 2 << endl;
	}

};
int main_Abstractclass()
{
	Rectangle mRect;
	Triangle mTri;

	int tempWidth;
	int tempHeight;

	//1. �簢���� �غ� , ���̸� �Է� �޽��ϴ�.

	cout << "mRect width?";
	cin >> tempWidth;

	cout << "mRect height?";
	cin >> tempHeight;

	mRect.SetWidth(tempWidth);
	mRect.SetHeight(tempHeight);
	//2. �ﰢ���� �غ� , ���̸� �Է¹޽��ϴ�.

	cout << "mTri width?";
	cin >> tempWidth;

	cout << "mTri height?";
	cin >> tempHeight;

	mTri.SetHeight(tempHeight);
	mTri.SetWidth(tempWidth);

	//3. ���� ���
	mRect.PrintArea();
	mTri.PrintArea();


	return 0;
}