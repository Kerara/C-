#include "Bublle_Sort.h"

Bublle_Sort::Bublle_Sort()
{
}

Bublle_Sort::~Bublle_Sort()
{
}

void Bublle_Sort::Sort(int* mArray, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 1; j < size; j++)
		{
			if (mArray[j - 1] > mArray[i])
			{
				int temp = mArray[j - 1];
				mArray[j - 1] = mArray[j];
				mArray[j] = temp;

			}
		}
	}
}
