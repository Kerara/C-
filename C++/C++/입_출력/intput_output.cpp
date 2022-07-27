#include <iostream> // 입출력 스트림 (스트림은 데이터의 흐름 , 문자열을 처리하는 객체 , 기본다위는 바이트)
#include <string> // string 클래스 사용하기 위한  C++ 표준 클래스

namespace Sample
{
	int N = 5;
}

int main_put1()
{
	int N = 3;
	int input = 0;
	// 표준 이렵 스트림 객체
	// std:: cin

	// 표준 출력 스트림 객체
	// std ::cout

	// 그 외 객체
	// std::cerr, std::clog

	//한 줄 띄우기 = 'std::endl'를 사용하거나  '\n'를 사용하시면 됩니다.('\n'이 속도에서 좀더 우월)

	//출력
	std::cout << Sample::N << std::endl;
	std::cout << N << std::endl;

	// 입력
	std::cout << "숫자를 입력해주세요 :";
	std::cin >> input;

	std::cout << "입력한 숫자는? :" << input << std::endl;

	//문자열 입력받기
	char name[256];
	std::cout << "당신의 친구 이름을 적어주세요 :";
	std::cin >> name;

	std::cout << "당신의 친구의 이름은? :" << name << "입니다." << std::endl;

	// 1. 한 줄 입력하기 [배열]
	char s[256];   // 배열 , 크기가 고정되어있음

	std::cout << "문자열을 입력해주세요[배열] :";
	std::cin.get(); //개행문자 제거
	std::cin.getline(s, 20);//배열과 입력받을 문자열 크기

	std::cout << s << std::endl;

	//2. 한 줄 입력하기 [string]

	std::string str;  //문자열 크기에 따라서 클래스 내부 버퍼가 번경

	std::cout << " 문자열을 입력해주세요[string] :";

	std::getline(std::cin, str);
	std::cout << "입력한 문자열[string] :" << str << std::endl;


	return 0;
}
