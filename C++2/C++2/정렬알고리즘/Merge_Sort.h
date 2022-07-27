#pragma once
class Merge_Sort
{
public :
	Merge_Sort();
	~Merge_Sort();

	void Sort(int* mArray, int size, int start, int end);
	void MergeSort(int* mArray, int size, int start, int end);
	void Merge(int* mArray, int size, int start, int median, int end);



};

