#include <iostream>
#include <stdlib.h>
#include <Windows.h>

#include "Selection_Sort.h"
#include "Insertion_Sort.h"
#include "Bublle_Sort.h"
#include "Merge_Sort.h"
#include "Quick_Sort.h"

Selection_Sort g_Selection; // 선택정렬
Insertion_Sort g_Insertion;  //삽입정렬
Bublle_Sort g_Bublle;		// 버블 정렬
Merge_Sort g_Merage;		//병합 정렬
Quick_Sort g_Quick;  //퀵 정렬


using namespace std;

//원본 // 정렬결과 보기
#define VIEW_LOG  0

//메모리 초기화
#define SAFE_FREE(t) {if(t != NULL) delete[] t;}

//랜덤값을 가져오는 함수
int GetRandom(int range) { return rand() % range + 1; }

//배열 할당 /랜덤값 설정
int* GetRandomArry(int* mArray, int n, int range)
{
	mArray = new int[n];
	for (int i = 0; i < n; i++)
		mArray[i] = GetRandom(range);

	return mArray;
}
int main_정렬알고리즘()
{
	srand(GetTickCount());

	int* mArray = nullptr;

	//배열 크기(N), 배열 범위(Range)
	int N, Range;

	//시간체크 (정렬속도 체크)
	double startTime;
	double endTime;

	cout << " 정렬할 배열 값의 개수를 설정해주세요 :";
	cin >> N;

	cout << "랜덤값의 볌위를 설정햊세요 (1~Range) :";
	cin >> Range;

	//1.선택정렬
	//배열 랜덤 할당
	mArray = GetRandomArry(mArray, N, Range);
	cout << endl;
	cout << "[1.선택정렬]" << endl;
#if (VIEW_LOG ==1)
	//원본 표시
	cout << "원본데이터 :";

	for (int i = 0; i < N; i++)
		cout << mArray[i] << "";
	
	cout << endl;
#endif 
	//정렬 시작 (시간체크)
	startTime = GetTickCount();

	//정렬 알고리즘 사용
	g_Selection.Sort(mArray, N);

	//정렬 완료 (시간 체크)
	endTime = GetTickCount();

	// 결과 출력 (시간 출력)
	cout << " 처리시간 :" << (endTime = startTime) / 1000 << "/sec" << endl;

#if (VIEW_LOG ==1)
	// 정렬 결과 표시 
	cout << " 결과 데이터 :";

	for(int i = 0; i<N; i++)
		cout << mArray[i] <<"";
	cout << endl;
#endif 
	SAFE_FREE(mArray);

	//2. 삽입정렬
	//배열 랜덤 할당
	mArray = GetRandomArry(mArray, N, Range);
	cout << endl;
	cout << "[2. 삽입정렬]" << endl;
#if (VIEW_LOG ==1)
	//원본 표시
	cout << "원본데이터 :";

	for (int i = 0; i < N; i++)
		cout << mArray[i] << "";

	cout << endl;
#endif 
	//정렬 시작 (시간체크)
	startTime = GetTickCount();

	//정렬 알고리즘 사용
	g_Insertion.Sort(mArray, N);

	//정렬 완료 (시간 체크)
	endTime = GetTickCount();

	// 결과 출력 (시간 출력)
	cout << " 처리시간 :" << (endTime = startTime) / 1000 << "/sec" << endl;

#if (VIEW_LOG ==1)
	// 정렬 결과 표시 
	cout << " 결과 데이터 :";

	for (int i = 0; i < N; i++)
		cout << mArray[i] << "";
	cout << endl;
#endif 
	SAFE_FREE(mArray);


	//3..버블정렬
	//배열 랜덤 할당
	mArray = GetRandomArry(mArray, N, Range);
	cout << endl;
	cout << "[3. 버블정렬]" << endl;
#if (VIEW_LOG ==1)
	//원본 표시
	cout << "원본데이터 :";

	for (int i = 0; i < N; i++)
		cout << mArray[i] << "";

	cout << endl;
#endif 
	//정렬 시작 (시간체크)
	startTime = GetTickCount();

	//정렬 알고리즘 사용
	g_Bublle.Sort(mArray, N);

	//정렬 완료 (시간 체크)
	endTime = GetTickCount();

	// 결과 출력 (시간 출력)
	cout << " 처리시간 :" << (endTime = startTime) / 1000 << "/sec" << endl;

#if (VIEW_LOG ==1)
	// 정렬 결과 표시 
	cout << " 결과 데이터 :";

	for (int i = 0; i < N; i++)
		cout << mArray[i] << "";
	cout << endl;
#endif 
	SAFE_FREE(mArray);


	//4.병합정렬
	//배열 랜덤 할당
	mArray = GetRandomArry(mArray, N, Range);
	cout << endl;
	cout << "[4. 병합 정렬]" << endl;
#if (VIEW_LOG ==1)
	//원본 표시
	cout << "원본데이터 :";

	for (int i = 0; i < N; i++)
		cout << mArray[i] << "";

	cout << endl;
#endif 
	//정렬 시작 (시간체크)
	startTime = GetTickCount();

	//정렬 알고리즘 사용
	g_Merage.Sort(mArray, N, 0, N - 1);


	//정렬 완료 (시간 체크)
	endTime = GetTickCount();

	// 결과 출력 (시간 출력)
	cout << " 처리시간 :" << (endTime = startTime) / 1000 << "/sec" << endl;

#if (VIEW_LOG ==1)
	// 정렬 결과 표시 
	cout << " 결과 데이터 :";

	for (int i = 0; i < N; i++)
		cout << mArray[i] << "";
	cout << endl;
#endif 
	SAFE_FREE(mArray);

	//5. 퀵 정렬
	//배열 랜덤 할당
	mArray = GetRandomArry(mArray, N, Range);
	cout << endl;
	cout << "[5. 퀵 정렬]" << endl;
#if (VIEW_LOG ==1)
	//원본 표시
	cout << "원본데이터 :";

	for (int i = 0; i < N; i++)
		cout << mArray[i] << "";

	cout << endl;
#endif 
	//정렬 시작 (시간체크)
	startTime = GetTickCount();

	//정렬 알고리즘 사용
	g_Quick.Sort(mArray,0, N - 1);


	//정렬 완료 (시간 체크)
	endTime = GetTickCount();

	// 결과 출력 (시간 출력)
	cout << " 처리시간 :" << (endTime = startTime) / 1000 << "/sec" << endl;

#if (VIEW_LOG ==1)
	// 정렬 결과 표시 
	cout << " 결과 데이터 :";

	for (int i = 0; i < N; i++)
		cout << mArray[i] << "";
	cout << endl;
#endif 
	SAFE_FREE(mArray);
	return 0;
}