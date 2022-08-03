#include "MenuScene.h"

void MenuScene::lnit(SceneManager& pSceneManger)
{
}


void MenuScene::Update(float dt)
{
	if (GetAsyncKeyState(VK_RIGHT))
		selectMenu = MENU_GAME_EXIT;

	if (GetAsyncKeyState(VK_LEFT))
		selectMenu = MENU_GAME_START;

	if (GetAsyncKeyState(VK_RETURN))
	{
		switch (selectMenu)
		{
		case MENU_GAME_START:
			SetConsoleTextAttribute(System::getlnstance()->GetDB()->GetBuffer(), WHITE);
			System::getlnstance()->GetSM()->reserveChangeScene("GameScene");
			break;
		case MENU_GAME_EXIT:
			System::getlnstance()->SetExit(TRUE);
			SetConsoleTextAttribute(System::getlnstance()->GetDB()->GetBuffer(), WHITE);
			System::getlnstance()->GetDB()->WriteBuffer(0, 0, "게임을 종료합니다. 아무키나 눌러주세요");
			break;

		}
	}
}

void MenuScene::Render(float dt)
{
	DrawMenu(); //메뉴 그리기
	
}

void MenuScene::Destroy()
{
}

void MenuScene::DrawMenu()
{
	SetConsoleTextAttribute(System::getlnstance()->GetDB()->GetBuffer(), BLACK << 4);

	for (int i = 0; i <= 20; i++)
	{
		for (int j = 0; j <= 60; j += 2)
		{
			System::getlnstance()->GetDB()->WriteBuffer(j, i, "  ");
		}


		SetConsoleTextAttribute(System::getlnstance()->GetDB()->GetBuffer(), RED);
		
		for(int i  = 2; i <= 60 ; i+=2)
		System::getlnstance()->GetDB()->WriteBuffer(i, 1, "■");

		for (int i = 2; i < 17; i++)
		{
			System::getlnstance()->GetDB()->WriteBuffer(2, i, "■");
			System::getlnstance()->GetDB()->WriteBuffer(60, i, "■");
		}

		switch (selectMenu)
		{
		case MENU_GAME_START:
			SetConsoleTextAttribute(System::getlnstance()->GetDB()->GetBuffer(), YELLOW);
			System::getlnstance()->GetDB()->WriteBuffer(14, 9, "▶");
			System::getlnstance()->GetDB()->WriteBuffer(16, 9, "게임시작");

			SetConsoleTextAttribute(System::getlnstance()->GetDB()->GetBuffer(), WHITE);
			System::getlnstance()->GetDB()->WriteBuffer(38, 9, "게임종료");

			break;
		case MENU_GAME_EXIT:
			SetConsoleTextAttribute(System::getlnstance()->GetDB()->GetBuffer(), WHITE);
			System::getlnstance()->GetDB()->WriteBuffer(16, 9, "게임시작");

			SetConsoleTextAttribute(System::getlnstance()->GetDB()->GetBuffer(), YELLOW);
			System::getlnstance()->GetDB()->WriteBuffer(36, 9, "▶");
			System::getlnstance()->GetDB()->WriteBuffer(38, 9, "게임종료");
			break;

		}

		SetConsoleTextAttribute(System::getlnstance()->GetDB()->GetBuffer(), RED);

		for (int i = 2; i <= 60; i += 2)
			System::getlnstance()->GetDB()->WriteBuffer(i, 17, "■");
	}
}

MenuScene::MenuScene()
{
}

MenuScene::~MenuScene()
{
}
