//������
// vector v             v�� �� �����̳�
// vector v(n)          v�� �ʱ�ȭ�� n���� ���Ҹ� ���´�.
// vector v(n,x)        v�� x������ �ʱ�ȭ�� n���� ���Ҹ� ���´�.
// vector v(v2)         v�� v2 �����̳� ���纻
// vector v(a,b)        v�� �ݺ��� ���� (a,b)�� �ʱ�ȭ �� ���Ҹ� ���´�.

//�Լ� 
// v.assign(n,x)        v�� x������ �ʱ�ȭ �� n���� ���Ҹ� �Ҵ�
// v.at (i)             v�� i��° ���Ҹ� ����
// v.back()		        v�� ���������Ҹ� ����
// iter = v.begin()		iter�� v�� ù ���Ҹ� ����Ű�� �ݺ���
// size = v.capacity()  size�� v�� �Ҵ�� �޸��� ũ��
// v.claear()			v�� ��� ���Ҹ� ����
// v.empty()			v�� ����� �� üũ
// iter = v.end()		v�� ���� ǥ���ϴ� �ݺ���
// iter = v.rease(p)	p�� ����Ű�� ���Ҹ� ����, iter�� ���� ���Ҹ� ����Ŵ
// v.front()			v�� ù��° ���Ҹ� ����
// iter = v.insert(p,x) p�� ����Ű�� ��ġ�� x���� ���� , iter�� ������ ���Ҹ� ����Ű�� �ݺ���
// size = v.max_size()  size�� v�� ���� �� �ִ� �ִ� ������ ����
// v.pop_back()			v�� ������ ���Ҹ� ����
// v.psuh_back()		v�� ���� x�� �߰�
// v.size()				v�� ���� ����
// v.swap(v2)			v�� v2�� ��ü
// v1 == v2				v1�� v2�� ��� ���Ұ� ������ Ȯ��
// v1 != v2				v1�� v2�� ��� ������ �ϳ��� �ٸ� ���Ұ� �ִ���
// v1 < v2				v1���� v2�� ū�� ( ���ڿ� ��)
// v[i]					v�� i��° ���Ҹ� �����Ѵ�.


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

int main�ڷᱸ��2()
{
	vector<int> v(5);
	cout << "size" << v.size() << "capacity :" << v.capacity() << endl;

	vector<int>().swap(v); //���� ���Ϳ� ��ȯ (�Լ���)
	cout << " size :" << v.size() << " capacity  :" << v.capacity() << endl;

	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	cout << v1[0] << "." << v1.at(0) << v1.front()<< endl; //ù��° ����
	cout << v1[4] << "." << v1.at(4) << v1.back() << endl; //���������� 

	v1.front() *= 10;
	v1.back() *= 10;

	cout << v1[0] << "." << v1.at(0) << v1.front() << endl; //ù��° ����
	cout << v1[4] << "." << v1.at(4) << v1.back() << endl; //���������� 


	vector<int> v2;
	v2.push_back(100);
	v2.push_back(20);
	v2.push_back(30);
	v2.push_back(40);
	v2.push_back(500);

	if (v1 == v2)
	{
		cout << "v1.v2�� �����ϴ�." << endl;
	}
	else
	{
		cout << "v1,v2�� ���� �ʽ��ϴ�." << endl;

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
