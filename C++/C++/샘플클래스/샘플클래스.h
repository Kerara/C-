#pragma once
#include <iostream>

using namespace std;

class 샘플클래스
{
	//public:  어는곳에서든 접근이 가능
	//protected: 자기 자신과 상속받은 클래스(자식)에서 접근이 가능
	//private: 자기 자신만 접근이 가능
public:
	char m_Name[256];
	int m_Score;

	//함수 정의 단축키 = Ctrl+. +Ender
	void       PrintRank();

public:
	샘플클래스();
	~샘플클래스();
};
