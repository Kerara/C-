#pragma once
#include <string>

class 샘플클래스3
{
private:
	char name[256];  //이름을 가지고 있는 필드
public:
	void  SetName(char* text); //이름을 설정하는 메소드 
	char* GetName();				//이름을 반환하는 메소드 
public:
	샘플클래스3();
	~샘플클래스3();
};

