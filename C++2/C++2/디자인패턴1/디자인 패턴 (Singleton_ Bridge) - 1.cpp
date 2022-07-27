// 싱글톤이란?
// 프로그램 내에서 하나의 인스턴스만 생성 후 사용할 때 쓰는 패턴 (매니저)


#include <iostream>
#pragma warning( disable : 4996)

using namespace std;

class MySingleton
{
private :
	static MySingleton* _instance;

	char  myName[128];
	int myScore;
public :

	void Destory() { if (_instance != nullptr)  delete _instance; }
	static MySingleton* getlnstance()
	{
		if ( _instance == nullptr)
			_instance = new MySingleton;

		return _instance;
	}

	void SetName(const char* name) { strcpy(myName, name); }
	void SetScore(int value) { myScore = value; }

	char* GetName() { return myName; }
	int GetScore() { return myScore;}

	void Print()
	{
		cout << "name?" << myName << endl;
		cout << "score?" << myScore << endl;
	}
};

MySingleton* MySingleton::_instance = nullptr;

int main_디자인패턴()
{
	MySingleton::getlnstance()->SetName("강아지");
	MySingleton::getlnstance()->SetScore(50);

	MySingleton::getlnstance()->Print();


	MySingleton::getlnstance()->Destory();
	return 0;
}