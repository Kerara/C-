// �ڵ��� ���� ���α׷��� �ۼ����ּ��� !!

//1.CarInformation Ŭ����
// priavte chat color[256] ,int carNumber ,int speeed , int gear�� ��������� ������ �ֽ��ϴ�.
// ����������� getter / setter�� �������ּ��� 
// Print() �޼ҵ鸦 ����ϸ� ����������� ������ ����� �� �ֽ��ϴ�.

// 2 . C_Car
// CarInformation Ŭ������ ��ӹ޽��ϴ�.
// private int ID, char name [256]�� ��� ������ ������ �ֽ��ϴ�.
// ����������� getter / setter�� �������ּ���
// �������̵� �޼ҵ� Print()�� CarInformation�� ��������� ������ C_Car�� ��������� ������ ����մϴ�.

//��Ʈ�� ����Ʈ���� CarInformation������ C_Car ������ �����Ҵ��� �Ŀ� (new �ڷ���)
//�����͸� �Է��ϰ� Print�Լ��� ȣ���ؼ� ������ ������ּ��� 
// �۾��� ������ �����Ҵ��� �޸𸮸� �������ּ���.(delete ������)

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
		cout << "��������������  Car Infoarmation  ��������������������" << endl;
		cout << " color :" << color << endl;
		cout << " carNumber :" << carNumber << endl;
		cout << " carSpeed :" << speed << endl;
		cout << "gear :" << gear << endl;
		cout << "������������������������������������������������������ " << endl;
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
		cout << "��������������   Car Infoarmation  ��������������������" << endl;
		cout << "id :" << id << endl;
		cout << "name :" << name << endl;
		cout << " color :" << GetColor() << endl;
		cout << " carNumber :" << GetCarNumber() << endl;
		cout << " carSpeed :" << GetSpeed() << endl;
		cout << "gear :" << GetGear() << endl;
		cout << "�������������������������������������������������������� " << endl;
	}

};

using namespace std;

int main_inheritance3()
{
	CarInformation* mInfo = new CarInformation; //�����Ҵ�
	C_Car* mCar = new C_Car; //�����Ҵ�
	
	char tempColor[256];
	int tempNumber;
	int tempSpeed;
	int tempGear;
	char tempName[256];
	int tempID;

	//1.mInfo�� �����Է�
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

	//2.mCar�� ���� �Է�

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

	//3.mInfo.mCar ���� ���
	mInfo->Printf();
	mCar->Printf();

	//4. ����� �����ٸ� �޸� ���� 

	delete mInfo;
	delete mCar;

	return 0;
}