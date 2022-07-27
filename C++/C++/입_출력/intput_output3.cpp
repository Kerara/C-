//int Çü º¯¼ö N °ú M¿¡ ÀÓÀÇ Á¤¼ö °ªÀ» ÀÔ·Â¹Ş°í
// µ¡¼À , »¬¼À, °ö¼¼ , ³ª´°¼À ,³ª¸ÓÁö °á°ú¸¦ Ãâ·ÂÇØÁÖ¼¼¿ä!

//input
//N?50
//M?30

//output
//µ¡¼À : 80
// »¬¼À : 20
// °ö¼À : 1500
// ³ª´°¼À : 1.6666
// ³ª¸ÓÁö : 20

#include <iostream>
using namespace std;

int main_put3()
{
	int N, M;

	cout << "N?";
	cin >> N;
	cout << "M?";
	cin >> M;

	cout.precision(2);
	cout << fixed;

	cout << "µ¡¼À :" << N + M << endl;
	cout << "»¬¼À :" << N - M << endl;
	cout << "°ö¼À :" << N * M << endl;
	cout << "³ª´°¼À :" << (double)N / M << endl;
	cout << "³ª¸ÓÁö :" << N % M << endl;

	return 0;

}