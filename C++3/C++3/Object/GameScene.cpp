#include "GameScene.h"
#pragma warning(disable : 4996)

void GameScene::lnit(SceneManager& pSceneManger)
{
	mEnemy.clear();
	mEnemyMakeTime = 0;
	System::getlnstance()->SetScore(0);
	System::getlnstance()->SetCollision(FALSE);

	m_Character.lnit();
}

void GameScene::Update(float dt)
{
	if (GetTickCount() - mEnemyMakeTime > 1000)
	{
		mEnemyMakeTime = GetTickCount();

		Enemy temp;
		temp.SetPosX(30);
		temp.SetPosY(rand() % 13 + 2);
		temp.SetBullet(m_Character.GetBullet());
		mEnemy.push_back(temp);
	}

	for (auto itor = mEnemy.begin(); itor != mEnemy.end();)
	{
		if (itor->m_Remove)
			itor = mEnemy.erase(itor);
		else
		{
			itor->Update(dt);
			itor++;
		}

	}
	if (GetAsyncKeyState(VK_ESCAPE))
		System::getlnstance()->GetSM()->reserveChangeScene("MenuScene");

	if(!System::getlnstance()->GetCollision()) m_Character.Update(dt);
}

void GameScene::Render(float dt)
{
	SetConsoleTextAttribute(System::getlnstance()->GetDB()->GetBuffer(), WHITE);
	DrawMap();


	SetConsoleTextAttribute(System::getlnstance()->GetDB()->GetBuffer(), YELLOW);

	for (auto itor = mEnemy.begin(); itor != mEnemy.end(); ++itor)
		itor->Render(dt);

	SetConsoleTextAttribute(System::getlnstance()->GetDB()->GetBuffer(), WHITE);



	m_Character.Render(dt);
	DrawUI();
	SetConsoleTextAttribute(System::getlnstance()->GetDB()->GetBuffer(), WHITE);
	System::getlnstance()->GetDB()->WriteBuffer(0, 0, "여기는 게임씬입니다.");

}
void GameScene::Destroy()
{
	m_Character.Destroy();

	for (auto itor = mEnemy.begin(); itor != mEnemy.end(); ++itor)
		itor->Destroy();
}

void GameScene::DrawMap()
{
	SetConsoleTextAttribute(System::getlnstance()->GetDB()->GetBuffer(), BLACK << 4);

	for (int i = 0; i <= 20; i++)
	{
		for (int j = 0; j <= 60; j += 2)
		{
			System::getlnstance()->GetDB()->WriteBuffer(j, i, "  ");
		}


		SetConsoleTextAttribute(System::getlnstance()->GetDB()->GetBuffer(), RED);

		for (int i = 2; i <= 60; i += 2)
			System::getlnstance()->GetDB()->WriteBuffer(i, 1, "■");

		for (int i = 2; i < 17; i++)
		{
			System::getlnstance()->GetDB()->WriteBuffer(2, i, "■");
			System::getlnstance()->GetDB()->WriteBuffer(60, i, "■");
		}

		SetConsoleTextAttribute(System::getlnstance()->GetDB()->GetBuffer(), RED);

		for (int i = 2; i <= 60; i += 2)
			System::getlnstance()->GetDB()->WriteBuffer(i, 17, "■");
	}
}

void GameScene::DrawUI()
{
	char str[128];
	sprintf(str, "점수 %5d점", System::getlnstance()->GetScore());

	SetConsoleTextAttribute(System::getlnstance()->GetDB()->GetBuffer(), YELLOW);
	System::getlnstance()->GetDB()->WriteBuffer(2, 18, str);
	SetConsoleTextAttribute(System::getlnstance()->GetDB()->GetBuffer(), WHITE);

	if (System::getlnstance()->GetCollision())
	{
		SetConsoleTextAttribute(System::getlnstance()->GetDB()->GetBuffer(), RED <<4);

		for (int i = 6; i < 12; i++)
		{
			for (int j = 20; j < 48; j += 2)
			{
				System::getlnstance()->GetDB()->WriteBuffer(j, i, "  ");
			}
		}
	
	
		SetConsoleTextAttribute(System::getlnstance()->GetDB()->GetBuffer(), YELLOW);
		for (int i = 20; i < 48; i += 2)
			System::getlnstance()->GetDB()->WriteBuffer(i, 6, "■");

		for (int i = 6; i < 12; i++)
		{
			SetConsoleTextAttribute(System::getlnstance()->GetDB()->GetBuffer(), YELLOW);
			System::getlnstance()->GetDB()->WriteBuffer(20, i, "■");
			System::getlnstance()->GetDB()->WriteBuffer(48, i, "■");
		}

		SetConsoleTextAttribute(System::getlnstance()->GetDB()->GetBuffer(),  RED << 4 | WHITE);
		System::getlnstance()->GetDB()->WriteBuffer(30, 9, "게임오버");
		System::getlnstance()->GetDB()->WriteBuffer(26, 10, "ESC 키를 눌러주세요");

		SetConsoleTextAttribute(System::getlnstance()->GetDB()->GetBuffer(), YELLOW);
		for (int i = 20; i <= 48; i += 2)
			System::getlnstance()->GetDB()->WriteBuffer(i, 12, "■");
	
	}

}

GameScene::GameScene()
{
}

GameScene::~GameScene()
{
}
