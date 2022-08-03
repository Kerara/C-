#include "System.h"
#include "SceneDefine.h"

System* System::_instance = nullptr;
void lnit();

int main()
{
	//씬맨니저 / 더블 버퍼 생성 , 초기화
	lnit();
	while (!System::getlnstance()->GetExit())
	{
		System::getlnstance()->GetDB()->ClearBuffer();

		System::getlnstance()->GetSM()->Render(DELTATIME);
		System::getlnstance()->GetSM()->Update(DELTATIME);

		System::getlnstance()->GetDB()->FlippingBuffer();
	}

	//프로그램 종료
	System::getlnstance()->Destroy();
	return 0;
}

void lnit()
{
	// 시스템 매니저 생성 , 더블 버퍼 생성 / 초기화
	System::getlnstance()->GetDB()->CreateBuffer(CONSOLE_MAX_WIDTH, CONSOLE_MAX_HEIGHT);

	//씬매니저 생성 / 초기화
	System::getlnstance()->GetSM()->RegisterScene("MenuScene", new MenuScene); // 메뉴 씬 생성
	System::getlnstance()->GetSM()->RegisterScene("GameScene", new GameScene); // 메뉴 씬 생성
	//씬 등록
	System::getlnstance()->GetSM()->reserveChangeScene("MenuScene"); //메뉴 씬  설정


}