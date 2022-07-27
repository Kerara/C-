#include "Merge_Sort.h"

Merge_Sort::Merge_Sort()
{
}

Merge_Sort::~Merge_Sort()
{
}

//임시로 값을 저장함
int* tempArray;

void Merge_Sort::Sort(int* mArray, int size, int start, int end)
{
	tempArray = new int[size];
	MergeSort(mArray, size, start, end);
	delete[] tempArray;
}

// 덩어리를 분할하는 함수 
void Merge_Sort::MergeSort(int* mArray, int size, int start, int end)
{
	// 중간값 설정
	int median = (start + end) / 2;

	//덩어리의 개수가 두개이상이라면
	if (start < end)
	{
		//각각의 덩어리로 재귀함수를 호풀합니다.(분할합니다.)
		MergeSort(mArray, size, start ,median);
		MergeSort(mArray, size, median + 1, end);

		//각각의 덩어리를 뭉치면서 정렬시킵니다.
		Merge(mArray, size, start, median, end);
	}

}

// 정렬해서 합병하는 함수
void Merge_Sort::Merge(int* mArray, int size, int start, int median, int end)
{
	int i, j, k, m, n;

	//앞 덩어리의 시작 인덱스
	i = start;

	// 뒷 덩어리의 시작 인덱스
	j = median + 1;

	//tempArry의 시작인덱스
	k = start;

	while (i <= median && j <= end)
	{	
		//앞덩어리. 뒷덩이리 중 더 작은 숫자를 찾아 tempArray에 넣어 줍니다.
		tempArray[k++] = (mArray[i] > mArray[j]) ? mArray[j++] : mArray[i++];
	}

	//아직 배열에 들어가지 않은 원소들을 처리합니다.
	m = (i > median) ? j : i;  //원소가 남아 있는 덩어리가 앞 덩어리인지 뒷 덩어리인지 체크
	n = (i > median) ? end : median; //원소가 남아있는 덩어리의 끝 인덱스를 넣어줍니다.

	// 임시 배열에 잔여 원소들을 넣어줍니다.
	for (; m <= n; m++)
	{
		tempArray[k++] = mArray[m];
	}

	//임시 배열에서 원본 배열 mArray로 값을 넘겨줍니다.
	for (m = start;  m<= end; m++)
	{
		mArray[m] = tempArray[m];
	}
}
