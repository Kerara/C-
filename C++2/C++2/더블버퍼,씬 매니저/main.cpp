#include <iostream>
#include "DoubbleBuffer.h"
#pragma warning (disable : 4996)

using namespace std;
DoubbleBuffer g_DB;


int main()
{
	g_DB.CreateBuffer(150, 100);
	while (true)
	{
		g_DB.ClearBuffer();

		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				g_DB.WriteBuffer(i * 2, j, "��");
			}
		}

		g_DB.FlippingBuffer();
	}
}