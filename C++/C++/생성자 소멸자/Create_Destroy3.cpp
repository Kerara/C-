// private int형 id , char name[256]를 멤버변수로 가지고 있는 UserInfo 클래스 선언/정의해주세요.
// id , name을 사용할 수 있도록 getter / setter를 만들어주세요.
// UserInfo 인스턴스를 생성할 때 id에서는 1234, name에는 "이름없음 " 이 들어가도록 설정해주세요 (생성자)
// 인스턴스가 소멸할때 "소멸자를 호출합니다. ." 를 출력하도록 설정해주세요 . (소멸자)
// 엔트리포인트 main에서 UserInfo 인스턴스를 생성후 id에 4567, name에는 "김철수" 넣은 후 출력해주세요 !

#include <iostream>
#pragma  warning(disable : 4996)

using namespace std;
class UserInfo
{
private:
	int id;
	char name[256];
public:
	void SetID(int value) { id = value; }
	void SetName(const char* data) { strcpy(name, data); }

	int GetID() { return id; }
	char* GetName() { return name; }

public:
	UserInfo() { id = 1234; strcpy(name, "이름없음"); }
	~UserInfo() { cout << "소멸자를 호출합니다. " << endl; }

};

int main_Destory3()
{
	UserInfo mClass;

	mClass.SetID(4567);
	mClass.SetName("김철수");

	cout << "id" << mClass.GetName() << endl;
	cout << "name" << mClass.GetName() << endl;
	return 0;
}