// �⺻  ��� ����
// map<key, value> : key�� value�� pair ���·� ���� �մϴ�.

// m.begein()					    ù��° ���Ҹ� ����Ű�� �ݺ��� ��ȯ
// m.end()						    ���� ǥ���ϴ� �ݺ��� ��ȯ
// m.insert(make_pair(key, value)	�ɿ� ���Ҹ� pair���·� �߰�
// m.erase(key)						�ʿ��� key���� �ش��ϴ� ���� ���� 
// m.clear()						���� ��� ���Ҹ� ���� 
// m.find(key)						key���� �ش��ϴ� ���Ҹ� ����Ű�� �ݺ��� ��ȯ
// m.count(key)						key���� �ش��ϴ� ������ ������ ��ȯ
// m.empty()						���� ����ִ��� üũ
// m.size()							���� ���ҵ��� ���� ��ȯ

#include <iostream>
#include <map>

using namespace std;

int main_�ڷᱸ��3()
{
	map<int, int> m;

	m.insert(pair<int, int>(1, 100));
	m.insert(pair<int, int>(2, 200));

	pair<int, int>p(3, 400); //pair ��ü ���� ��  m�� insert()

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
		cout << pr.first->first << "." << pr.first->second << "�Է� ���� " << endl;
	else
		cout << "key 4�� �̹� m�ȿ� ���� �մϴ�. (�ߺ� �ȵ�)" << endl;

	pr = m.insert(pair<int, int>(4, 300));

	if (pr.second)
		cout << pr.first->first << "." << pr.first->second << "�Է� ���� " << endl;
	else
		cout << "key 4�� �̹� m�ȿ� ���� �մϴ�. (�ߺ� �ȵ�)" << endl;

	return 0;
}