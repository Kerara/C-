#include <iostream>
#include <stdlib.h>
#include <Windows.h>

#include "Selection_Sort.h"
#include "Insertion_Sort.h"
#include "Bublle_Sort.h"
#include "Merge_Sort.h"
#include "Quick_Sort.h"

Selection_Sort g_Selection; // ��������
Insertion_Sort g_Insertion;  //��������
Bublle_Sort g_Bublle;		// ���� ����
Merge_Sort g_Merage;		//���� ����
Quick_Sort g_Quick;  //�� ����


using namespace std;

//���� // ���İ�� ����
#define VIEW_LOG  0

//�޸� �ʱ�ȭ
#define SAFE_FREE(t) {if(t != NULL) delete[] t;}

//�������� �������� �Լ�
int GetRandom(int range) { return rand() % range + 1; }

//�迭 �Ҵ� /������ ����
int* GetRandomArry(int* mArray, int n, int range)
{
	mArray = new int[n];
	for (int i = 0; i < n; i++)
		mArray[i] = GetRandom(range);

	return mArray;
}
int main_���ľ˰���()
{
	srand(GetTickCount());

	int* mArray = nullptr;

	//�迭 ũ��(N), �迭 ����(Range)
	int N, Range;

	//�ð�üũ (���ļӵ� üũ)
	double startTime;
	double endTime;

	cout << " ������ �迭 ���� ������ �������ּ��� :";
	cin >> N;

	cout << "�������� ������ �����Y���� (1~Range) :";
	cin >> Range;

	//1.��������
	//�迭 ���� �Ҵ�
	mArray = GetRandomArry(mArray, N, Range);
	cout << endl;
	cout << "[1.��������]" << endl;
#if (VIEW_LOG ==1)
	//���� ǥ��
	cout << "���������� :";

	for (int i = 0; i < N; i++)
		cout << mArray[i] << "";
	
	cout << endl;
#endif 
	//���� ���� (�ð�üũ)
	startTime = GetTickCount();

	//���� �˰��� ���
	g_Selection.Sort(mArray, N);

	//���� �Ϸ� (�ð� üũ)
	endTime = GetTickCount();

	// ��� ��� (�ð� ���)
	cout << " ó���ð� :" << (endTime = startTime) / 1000 << "/sec" << endl;

#if (VIEW_LOG ==1)
	// ���� ��� ǥ�� 
	cout << " ��� ������ :";

	for(int i = 0; i<N; i++)
		cout << mArray[i] <<"";
	cout << endl;
#endif 
	SAFE_FREE(mArray);

	//2. ��������
	//�迭 ���� �Ҵ�
	mArray = GetRandomArry(mArray, N, Range);
	cout << endl;
	cout << "[2. ��������]" << endl;
#if (VIEW_LOG ==1)
	//���� ǥ��
	cout << "���������� :";

	for (int i = 0; i < N; i++)
		cout << mArray[i] << "";

	cout << endl;
#endif 
	//���� ���� (�ð�üũ)
	startTime = GetTickCount();

	//���� �˰��� ���
	g_Insertion.Sort(mArray, N);

	//���� �Ϸ� (�ð� üũ)
	endTime = GetTickCount();

	// ��� ��� (�ð� ���)
	cout << " ó���ð� :" << (endTime = startTime) / 1000 << "/sec" << endl;

#if (VIEW_LOG ==1)
	// ���� ��� ǥ�� 
	cout << " ��� ������ :";

	for (int i = 0; i < N; i++)
		cout << mArray[i] << "";
	cout << endl;
#endif 
	SAFE_FREE(mArray);


	//3..��������
	//�迭 ���� �Ҵ�
	mArray = GetRandomArry(mArray, N, Range);
	cout << endl;
	cout << "[3. ��������]" << endl;
#if (VIEW_LOG ==1)
	//���� ǥ��
	cout << "���������� :";

	for (int i = 0; i < N; i++)
		cout << mArray[i] << "";

	cout << endl;
#endif 
	//���� ���� (�ð�üũ)
	startTime = GetTickCount();

	//���� �˰��� ���
	g_Bublle.Sort(mArray, N);

	//���� �Ϸ� (�ð� üũ)
	endTime = GetTickCount();

	// ��� ��� (�ð� ���)
	cout << " ó���ð� :" << (endTime = startTime) / 1000 << "/sec" << endl;

#if (VIEW_LOG ==1)
	// ���� ��� ǥ�� 
	cout << " ��� ������ :";

	for (int i = 0; i < N; i++)
		cout << mArray[i] << "";
	cout << endl;
#endif 
	SAFE_FREE(mArray);


	//4.��������
	//�迭 ���� �Ҵ�
	mArray = GetRandomArry(mArray, N, Range);
	cout << endl;
	cout << "[4. ���� ����]" << endl;
#if (VIEW_LOG ==1)
	//���� ǥ��
	cout << "���������� :";

	for (int i = 0; i < N; i++)
		cout << mArray[i] << "";

	cout << endl;
#endif 
	//���� ���� (�ð�üũ)
	startTime = GetTickCount();

	//���� �˰��� ���
	g_Merage.Sort(mArray, N, 0, N - 1);


	//���� �Ϸ� (�ð� üũ)
	endTime = GetTickCount();

	// ��� ��� (�ð� ���)
	cout << " ó���ð� :" << (endTime = startTime) / 1000 << "/sec" << endl;

#if (VIEW_LOG ==1)
	// ���� ��� ǥ�� 
	cout << " ��� ������ :";

	for (int i = 0; i < N; i++)
		cout << mArray[i] << "";
	cout << endl;
#endif 
	SAFE_FREE(mArray);

	//5. �� ����
	//�迭 ���� �Ҵ�
	mArray = GetRandomArry(mArray, N, Range);
	cout << endl;
	cout << "[5. �� ����]" << endl;
#if (VIEW_LOG ==1)
	//���� ǥ��
	cout << "���������� :";

	for (int i = 0; i < N; i++)
		cout << mArray[i] << "";

	cout << endl;
#endif 
	//���� ���� (�ð�üũ)
	startTime = GetTickCount();

	//���� �˰��� ���
	g_Quick.Sort(mArray,0, N - 1);


	//���� �Ϸ� (�ð� üũ)
	endTime = GetTickCount();

	// ��� ��� (�ð� ���)
	cout << " ó���ð� :" << (endTime = startTime) / 1000 << "/sec" << endl;

#if (VIEW_LOG ==1)
	// ���� ��� ǥ�� 
	cout << " ��� ������ :";

	for (int i = 0; i < N; i++)
		cout << mArray[i] << "";
	cout << endl;
#endif 
	SAFE_FREE(mArray);
	return 0;
}