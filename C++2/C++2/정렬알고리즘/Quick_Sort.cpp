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


	// 배열 중간값 입력
	median = mArray[(start + end) / 2];

	do
	{
		while (mArray[left] < median) left++; // mAraay[left]가 pivot값보다 작다면 통과
		while (mArray[right] > median) right--; // mAraay[right]가 pivot값보다 크다면 통과
	
		//left, right가 교차되지 않았다면 mArray[left, , mArray[right]를 교체
		if (left <= right)
		{
			int temp = mArray[left];
			mArray[left] = mArray[right];
			mArray[right] = temp;
			left++; right--;

		}		
	}while (left <= right); // left와 right가 교차되지 않았다면 반복

	//재귀함수 호출 (파티션을 나눈 후 퀵 정렬 실행)
	if (start < right) Sort(mArray, start, right); //stat부터 right까지 파티션 설정/정렬
	if (left < end)	Sort(mArray, left, end);	//left부터 end까지 파티션 설정 / 정렬
}
