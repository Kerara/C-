#include "Merge_Sort.h"

Merge_Sort::Merge_Sort()
{
}

Merge_Sort::~Merge_Sort()
{
}

//�ӽ÷� ���� ������
int* tempArray;

void Merge_Sort::Sort(int* mArray, int size, int start, int end)
{
	tempArray = new int[size];
	MergeSort(mArray, size, start, end);
	delete[] tempArray;
}

// ����� �����ϴ� �Լ� 
void Merge_Sort::MergeSort(int* mArray, int size, int start, int end)
{
	// �߰��� ����
	int median = (start + end) / 2;

	//����� ������ �ΰ��̻��̶��
	if (start < end)
	{
		//������ ����� ����Լ��� ȣǮ�մϴ�.(�����մϴ�.)
		MergeSort(mArray, size, start ,median);
		MergeSort(mArray, size, median + 1, end);

		//������ ����� ��ġ�鼭 ���Ľ�ŵ�ϴ�.
		Merge(mArray, size, start, median, end);
	}

}

// �����ؼ� �պ��ϴ� �Լ�
void Merge_Sort::Merge(int* mArray, int size, int start, int median, int end)
{
	int i, j, k, m, n;

	//�� ����� ���� �ε���
	i = start;

	// �� ����� ���� �ε���
	j = median + 1;

	//tempArry�� �����ε���
	k = start;

	while (i <= median && j <= end)
	{	
		//�յ��. �޵��̸� �� �� ���� ���ڸ� ã�� tempArray�� �־� �ݴϴ�.
		tempArray[k++] = (mArray[i] > mArray[j]) ? mArray[j++] : mArray[i++];
	}

	//���� �迭�� ���� ���� ���ҵ��� ó���մϴ�.
	m = (i > median) ? j : i;  //���Ұ� ���� �ִ� ����� �� ������� �� ������� üũ
	n = (i > median) ? end : median; //���Ұ� �����ִ� ����� �� �ε����� �־��ݴϴ�.

	// �ӽ� �迭�� �ܿ� ���ҵ��� �־��ݴϴ�.
	for (; m <= n; m++)
	{
		tempArray[k++] = mArray[m];
	}

	//�ӽ� �迭���� ���� �迭 mArray�� ���� �Ѱ��ݴϴ�.
	for (m = start;  m<= end; m++)
	{
		mArray[m] = tempArray[m];
	}
}
