#include "Quick_Sort.h"

Quick_Sort::Quick_Sort()
{
}

Quick_Sort::~Quick_Sort()
{
}

void Quick_Sort::Sort(int* mArray, int start, int end)
{
	int left;
	int right;
	int median;

	left = start;
	right = end;


	// �迭 �߰��� �Է�
	median = mArray[(start + end) / 2];

	do
	{
		while (mArray[left] < median) left++; // mAraay[left]�� pivot������ �۴ٸ� ���
		while (mArray[right] > median) right--; // mAraay[right]�� pivot������ ũ�ٸ� ���
	
		//left, right�� �������� �ʾҴٸ� mArray[left, , mArray[right]�� ��ü
		if (left <= right)
		{
			int temp = mArray[left];
			mArray[left] = mArray[right];
			mArray[right] = temp;
			left++; right--;

		}		
	}while (left <= right); // left�� right�� �������� �ʾҴٸ� �ݺ�

	//����Լ� ȣ�� (��Ƽ���� ���� �� �� ���� ����)
	if (start < right) Sort(mArray, start, right); //stat���� right���� ��Ƽ�� ����/����
	if (left < end)	Sort(mArray, left, end);	//left���� end���� ��Ƽ�� ���� / ����
}
