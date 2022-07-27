// 자동차 관리 프로그램을 작성해주세요 !!

//1.CarInformation 클래스
// priavte chat color[256] ,int carNumber ,int speeed , int gear를 멤버변수로 가지고 있습니다.
// 멤버변수들의 getter / setter를 설정해주세요 
// Print() 메소들를 사용하면 멤버변수들의 정보를 출력할 수 있습니다.

// 2 . C_Car
// CarInformation 클래스를 상속받습니다.
// private int ID, char name [256]를 멤버 변수로 가지고 있습니다.
// 멤버변수들의 getter / setter를 설정해주세요
// 오버라이드 메소드 Print()는 CarInformation의 멤버변수와 나머지 C_Car의 멤버변수의 정보를 출력합니다.

//엔트리 포인트에서 CarInformation변수와 C_Car 변수를 동적할당한 후에 (new 자료형)
//데이터를 입력하고 Print함수를 호출해서 정보를 출력해주세요 
// 작업이 끝나면 동적할당한 메모리를 해제해주세요.(delete 포인터)

#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

class CarInformation
{
private:
	char color[256];
	int carNumber;
	int speed;
	int gear;

public:
	void SetColor(char* value) { strcpy(color, value); }
	void SetCarNumber(int value) { carNumber = value; }
	void SetSpeed(int value) { speed = value; }
	void SetGear(int value) { gear = value; }

	char* GetColor() { return color; }
	int GetCarNumber() { return carNumber; }
	int GetSpeed() { return speed; }
	int GetGear() { return gear; }

	void Printf()
	{
		cout << "┌──────  Car Infoarmation  ─────────┐" << endl;
		cout << " color :" << color << endl;
		cout << " carNumber :" << carNumber << endl;
		cout << " carSpeed :" << speed << endl;
		cout << "gear :" << gear << endl;
		cout << "└─────────────────────────┘ " << endl;
	}
};

class C_Car : public CarInformation
{
private:
	char name[256];
	int id;

public :
	void SetName(char* value) { strcpy(name, value); }
	void SetID(int value) { id = value; }

	char* GetName() { return name; }
	int GetID() { return id; }

	void Printf()
	{
		cout << "┌──────   Car Infoarmation  ─────────┐" << endl;
		cout << "id :" << id << endl;
		cout << "name :" << name << endl;
		cout << " color :" << GetColor() << endl;
		cout << " carNumber :" << GetCarNumber() << endl;
		cout << " carSpeed :" << GetSpeed() << endl;
		cout << "gear :" << GetGear() << endl;
		cout << "└──────────────────────────┘ " << endl;
	}

};

using namespace std;

int main_inheritance3()
{
	CarInformation* mInfo = new CarInformation; //동적할당
	C_Car* mCar = new C_Car; //동적할당
	
	char tempColor[256];
	int tempNumber;
	int tempSpeed;
	int tempGear;
	char tempName[256];
	int tempID;

	//1.mInfo에 정보입력
	cout << " mInfo color?";
	cin >> tempColor;

	cout << "mIfo number?";
	cin >> tempNumber;

	cout << "mIfo speed?";
	cin >> tempSpeed;

	cout << "mIfo gear?";
	cin >> tempGear;
	
	mInfo->SetColor(tempColor);
	mInfo->SetCarNumber(tempNumber);
	mInfo->SetSpeed(tempSpeed);
	mInfo->SetGear(tempGear);

	//2.mCar에 정보 입력

	cout << "mCar id?";
	cin >> tempID;

	cout << "mCar name?";
	cin >> tempName;

	cout << " mCar color?";
	cin >> tempColor;

	cout << "mCar number?";
	cin >> tempNumber;

	cout << "mCar speed?";
	cin >> tempSpeed;

	cout << "mCar gear?";
	cin >> tempGear;

	mCar->SetID(tempID);
	mCar->SetName(tempName);
	mCar->SetColor(tempColor);
	mCar->SetCarNumber(tempNumber);
	mCar->SetSpeed(tempSpeed);
	mCar->SetGear(tempGear);

	//3.mInfo.mCar 정보 출력
	mInfo->Printf();
	mCar->Printf();

	//4. 사용이 끝났다면 메모리 해제 

	delete mInfo;
	delete mCar;

	return 0;
}