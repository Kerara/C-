// 1. ���ӽ����̽� CS (ö��)�� ������ , CS�ȿ� int�� ���� candy�� �����ϰ� 10�� �־� main�Լ����� ������ּ���!
// 2. ���ӽ����̽� YH (����)�� ������ , YH�ȿ� int�� ���� candy�� �����ϰ� 20�� �־� main�Լ����� ������ּ���!

#include <stdio.h>

namespace CS
{
	int candy = 10;
}

namespace YH
{
	int candy = 20;
}

int main_namespace()
{
	printf("ö���� ������? %d\n", CS::candy);
	printf("������ ������? %d\n", YH::candy);
	return 0;

}