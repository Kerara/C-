#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

class Car
{
private:
	char name[256];

public:
	void SetName(char* data) { strcpy(name, data); }
	char* GetName() { return name; }
public:
	Car() { strcpy(name, " 차 없음"); }
	Car(const char* data) { strcpy(name, data); }
	~Car() { cout << "소멸자 호출 " << endl;; }


};

int main_Destroy2()
{
	Car c_Car, y_Car;
	Car h_Car("마이바흐");
	char tempName[256];

	cout << "영희의 차? ";
	cin >> tempName;

	y_Car.SetName(tempName);

	cout << "철수의 차는? " << c_Car.GetName() << "입니다" << endl;
	cout << "영희의 차는?" << y_Car.GetName() << "입니다." << endl;
	cout << "훈이의 차는?" << h_Car.GetName() << "입니다." << endl;



	return 0;
}