// 1. 네임스페이스 CS (철수)를 생성후 , CS안에 int형 변수 candy를 선언하고 10을 넣어 main함수에서 출력해주세요!
// 2. 네임스페이스 YH (정아)를 생성후 , YH안에 int형 변수 candy를 선언하고 20을 넣어 main함수에서 출력해주세요!

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
	printf("철수의 사탕은? %d\n", CS::candy);
	printf("정아의 사탕은? %d\n", YH::candy);
	return 0;

}