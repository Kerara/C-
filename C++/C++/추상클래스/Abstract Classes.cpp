//추상클래스란?
// 추상메소드를 가지고 있는 클래스

// 추상 메소드 (순수가사함수)란?
// 부모클래스에서 구현한 가상함수를 자식클래승에서 반드시 재정의하도록 설정한 것 (다형성)

//인터페이스란?
//추상메소드로만 구성되어있는 클래스

#include <iostream>
#pragma warning(disable : 4996)

using namespace std;
class Shape
{
private :
	int width;
	int height;

public :
	void SetWidth(int value) { width = value; }
	void SetHeight(int value) { height = value; }

	int GetWidth() { return width; }
	int GetHeight() { return height; }

	//virtual 키워드를 사용해서 추방메소드를 선언할 수 있으며
	//추상 메소드를 가지고 있는 클래스를 추상클래스라고 합니다.
	// 추상클래스를 상속받는 자식클래스들은 반드시 추상 메소드를 재 정의해줘야합니다. (규칙)
	// 추상클래스는 그 클래스 자체를 개체 (인스턴스)로 생성할 수 없습니다.

	virtual void PrintArea() = 0; //넓이를 출력하는 함수 (추상메소드)
};

class Rectangle : public Shape
{
public :
	virtual void PrintArea()
	{
		cout << "사각형의 넓이 :" << GetWidth() * GetHeight() << endl;
	}

};

class Triangle : public Shape
{
public :
	virtual void PrintArea()
	{
		cout << "삼각형의 넓이 : " << GetWidth() * GetHeight() / 2 << endl;
	}

};
int main_Abstractclass()
{
	Rectangle mRect;
	Triangle mTri;

	int tempWidth;
	int tempHeight;

	//1. 사각형의 밑변 , 높이를 입력 받습니다.

	cout << "mRect width?";
	cin >> tempWidth;

	cout << "mRect height?";
	cin >> tempHeight;

	mRect.SetWidth(tempWidth);
	mRect.SetHeight(tempHeight);
	//2. 삼각형의 밑변 , 높이를 입력받습니다.

	cout << "mTri width?";
	cin >> tempWidth;

	cout << "mTri height?";
	cin >> tempHeight;

	mTri.SetHeight(tempHeight);
	mTri.SetWidth(tempWidth);

	//3. 넓이 출력
	mRect.PrintArea();
	mTri.PrintArea();


	return 0;
}