#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

class Sampleclass
{
private :
	int key = 0;
public :
	void SetKey(int value) { key = value; }
	int GetKey() { return key; }


	// �� key���� 0���� ũ�ٸ� , ���� Ŭ������ key���� �������� b�� key���� ��ȯ�ǰ�
	bool operator = (Sampleclass& b)
	{
		if (key <= 0 || b.key <= 0)
			return false;

		int value = key;
		key = b.key;
		b.key = value;
		return true;

	}

};
	
int main_�����ڿ����ε�2()
	{
		Sampleclass N, M;
		N.SetKey(1234);
		M.SetKey(4567);

		if (N = M)
		{
			cout << "N.GetKey()?" << N.GetKey() << endl;
			cout << "M.GetKey()?" << M.GetKey() << endl;

		}
		else
		{
			cout << "N�� key�� M�� ���� 0 ���� �۰ų� �����ϴ�." << endl;

		}
		return 0;
}