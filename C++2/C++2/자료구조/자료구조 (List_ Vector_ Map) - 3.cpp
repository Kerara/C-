// 기본  사용 형태
// map<key, value> : key와 value를 pair 형태로 선언 합니다.

// m.begein()					    첫번째 원소를 가르키는 반복자 반환
// m.end()						    끝을 표식하는 반복자 반환
// m.insert(make_pair(key, value)	맴에 원소를 pair형태로 추가
// m.erase(key)						맵에서 key값에 해당하는 원소 삭제 
// m.clear()						맴의 모든 원소를 삭제 
// m.find(key)						key값에 해당하는 원소를 가리키는 반복자 반환
// m.count(key)						key값에 해당하는 원소의 개수를 반환
// m.empty()						맵이 비어있는지 체크
// m.size()							맵의 원소들의 수를 반환

#include <iostream>
#include <map>

using namespace std;

int main_자료구조3()
{
	map<int, int> m;

	m.insert(pair<int, int>(1, 100));
	m.insert(pair<int, int>(2, 200));

	pair<int, int>p(3, 400); //pair 객체 생성 후  m에 insert()

	m[11] = 200;
	m[12] = 200;
	m[13] = 40;

	map<int, int>::iterator iter;
	for (iter = m.begin(); iter != m.end(); ++iter)
		cout << "(" << (*iter).first << "." << (*iter).second << ")" << endl;

	m[13] == 400;

	for (iter = m.begin(); iter != m.end(); ++iter)
		cout << "(" << (*iter).first << "." << (*iter).second << ")" << endl;


	pair <map<int, int> ::iterator, bool>pr;


	pr = m.insert(pair<int, int>(4, 500));

	if (pr.second)
		cout << pr.first->first << "." << pr.first->second << "입력 성공 " << endl;
	else
		cout << "key 4가 이미 m안에 존재 합니다. (중복 안됨)" << endl;

	pr = m.insert(pair<int, int>(4, 300));

	if (pr.second)
		cout << pr.first->first << "." << pr.first->second << "입력 성공 " << endl;
	else
		cout << "key 4가 이미 m안에 존재 합니다. (중복 안됨)" << endl;

	return 0;
}