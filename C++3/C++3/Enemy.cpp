#include "Enemy.h"

void Enemy::SetBullet(vector<Bullet>& bullet)
{
	m_pBullet = &bullet;
}

void Enemy::lnit()
{
	m_MoveTime = GetTickCount();
}

void Enemy::Update(float dt)
{
	if (System::getlnstance()->GetCollision()) return;
	if (m_Remove) return;

	if (GetTickCount() - m_MoveTime > 100)
	{
		m_MoveTime = GetTickCount();
		posX--;
	}

	if (posX <= 1)
	{
		System::getlnstance()->SetCollision(TRUE);
		Destroy();
	}

	//총알 충돌
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (auto itor = m_pBullet->begin(); itor != m_pBullet->end(); ++itor)
			{
				if (mChar[j][i] && j + posX == itor->GetPosX() && i + posY == itor->GetPosY())
				{
					int score = System::getlnstance()->GetScore();
					System::getlnstance()->SetScore(score + 1);

					Destroy();
					return;
				}
			}
		}
	}
}

void Enemy::Render(float dt)
{
	if (m_Remove) return;

	//출발지점보다 값이 크다면
	if (posX >0)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				int DrawX = (posX + i) * 2;
				int DrawY = (posY + j);
				if (DrawX <= 0 || DrawX > 59 || DrawY <= 0 || DrawY > 16)
					System::getlnstance()->GetDB()->WriteBuffer(DrawX, DrawY,
						(mChar[j][i] ? "■" : ""));
			}
		}
	}
}

void Enemy::Destroy()
{
	m_Remove = TRUE;
}

Enemy::Enemy()
{
}

Enemy::~Enemy()
{
}
