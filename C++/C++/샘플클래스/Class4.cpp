//�л� �������� ���α׷�

//�л����� Ŭ���� 
// private ���� int score , int id�� ������ �ֽ��ϴ� .
// score , id��  getter, setter�� ����� �ּ���.

// ��Ʈ�� ����Ʈ main���� �л����� Ŭ���� �迭(5��)�� ����� score, id�� �Է¹޽��ϴ�. 
// �� �� �л����� ���� , ���� ���� ������ ���� �л��� id�� ������ ������ּ��� .
// �Ҽ����� ��° �ڸ����� ǥ���մϴ�. 

//output 
// chdwja : 385
// ��� : 72.22
// ���� ���� ������ ���� �л� ID : 123
// ���� ���� ������ ���� �л��� ���� : 99
#include <iostream>
#include "����Ŭ����4.h"

using namespace std;

void main_����Ŭ����4 ()
{
	����Ŭ����4 mClass[5];

	int tempID;
	int tempScore;

	//1.�л����� �Է�
	for (int i = 0; i < 5; i++)
	{
		cout << "id ?";
		cin >> tempID;

		cout << "score ?";
		cin >> tempScore;

		mClass[i].SetID(tempID);
		mClass[i].SetScore(tempScore);

	}

	//2. �л� ���� ���� (���� , �� , �ְ����� )
	int sum = 0;
	double avg = 0;
	int maxIndex = 0;

	for (int i = 0; i < 5; i++)
	{
		//���� ���ϱ� 
		sum += mClass[i].GetSCore();

		//�ְ� ���� �л� �ε��� ���ϱ� 
		if (mClass[maxIndex].GetSCore() < mClass[i].GetSCore())
			maxIndex = i;
	}

	avg = (double)sum / 5;

	//3. �л����� ��� 
	// �Ҽ��� �ڸ� ���� (2.��° �ڸ�����)
	cout << fixed;
	cout.precision(2);

	cout << " ���� :" << sum << endl;
	cout << " ��� :" << avg << endl;
	cout << "���� ���� ������ ���� �л� ID : " << mClass[maxIndex].GetID() << endl;
	cout << "���� ���� ������ ���� �л� ���� :" << mClass[maxIndex].GetSCore() << endl;
}