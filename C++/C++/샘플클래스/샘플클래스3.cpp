#include "샘플클래스3.h"
#pragma warning(disable : 4996)

void 샘플클래스3::SetName(char* text)
{
	//문자열 복사함수를 사용해서 name에 text의 내용을 복사합니다.
	//'\O'문자까지 복사합니다.
	strcpy(name, text);
}

char* 샘플클래스3::GetName()
{
	return name;
}



샘플클래스3::샘플클래스3()
{
}

샘플클래스3::~샘플클래스3()
{
}
