//생성자
// vector v             v는 빈 컨테이너
// vector v(n)          v는 초기화된 n개의 원소를 갖는다.
// vector v(n,x)        v는 x값으로 초기화된 n개의 원소를 갖는다.
// vector v(v2)         v는 v2 컨터이너 복사본
// vector v(a,b)        v는 반복자 구간 (a,b)로 초기화 된 원소를 갖는다.

//함수 
// v.assign(n,x)        v에 x값으로 초기화 된 n개의 원소를 할당
// v.at (i)             v의 i번째 원소를 참조
// v.back()		        v의 마지막원소를 참조
// iter = v.begin()		iter는 v의 첫 원소를 가리키는 반복자
// size = v.capacity()  size는 v에 할당된 메모리의 크기
// v.claear()			v의 모든 원소를 제거
// v.empty()			v가 비었는 지 체크
// iter = v.end()		v의 끝을 표식하는 반복자
// iter = v.rease(p)	p가 가리키는 원소를 제거, iter는 다음 원소를 가르킴
// v.front()			v의 첫번째 원소를 참조
// iter = v.insert(p,x) p가 가리키는 위치에 x값을 삽입 , iter는 삽입한 원소를 가리키는 반복자
// size = v.max_size()  size에 v가 담을 수 있는 최대 원소의 개수
// v.pop_back()			v의 마지막 원소를 제거
// v.psuh_back()		v의 끝에 x를 추가
// v.size()				v의 원소 개수
// v.swap(v2)			v와 v2를 교체
// v1 == v2				v1의 v2의 모든 원소가 같은지 확인
// v1 != v2				v1과 v2의 모든 원소중 하나라도 다른 원소가 있는지
// v1 < v2				v1보다 v2가 큰지 ( 문자열 비교)
// v[i]					v의 i번째 원소를 참조한다.


#include <iostream>
#include <vector>


using namespace std;

class SampleClass
{
private:
	int key;
public:
	SampleClass(int value) { key = value; }
	int GetKey() { return key; }
	void SetKey(int value) { key = value; }
};

int main자료구조2()
{
	vector<int> v(5);
	cout << "size" << v.size() << "capacity :" << v.capacity() << endl;

	vector<int>().swap(v); //임의 벡터와 교환 (함수자)
	cout << " size :" << v.size() << " capacity  :" << v.capacity() << endl;

	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	cout << v1[0] << "." << v1.at(0) << v1.front()<< endl; //첫번째 원소
	cout << v1[4] << "." << v1.at(4) << v1.back() << endl; //마지막원소 

	v1.front() *= 10;
	v1.back() *= 10;

	cout << v1[0] << "." << v1.at(0) << v1.front() << endl; //첫번째 원소
	cout << v1[4] << "." << v1.at(4) << v1.back() << endl; //마지막원소 


	vector<int> v2;
	v2.push_back(100);
	v2.push_back(20);
	v2.push_back(30);
	v2.push_back(40);
	v2.push_back(500);

	if (v1 == v2)
	{
		cout << "v1.v2는 같습니다." << endl;
	}
	else
	{
		cout << "v1,v2는 같지 않습니다." << endl;

	}

	vector<int>v3;
	v3.push_back(30);
	v3.push_back(50);

	v1.swap(v3);

	vector<int> ::iterator iter;

	for (iter = v1.begin(); iter != v1.end(); ++iter)
		cout << *iter << endl;

	vector<SampleClass>v4;
	v4.push_back(SampleClass(20));
	v4.push_back(SampleClass(40));
	v4.push_back(SampleClass(30));

	vector<SampleClass> ::iterator iter2;
	cout << "v4 :";
	for (iter2 = v4.begin(); iter2 != v4.end(); ++iter2)
		cout << iter2->GetKey() << endl;
 	return 0;
}
