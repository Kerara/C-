#include "Bullet.h"

void Bullet::lnit()
{

}

void Bullet::Update(float dt)
{
	if (m_Remove) return;
	if (posX >= 30) Destroy();
}

void Bullet::Render(float dt)
{
	if (m_Remove) return;
	if (posX < 30)
	{
		System::getlnstance()->GetDB()->WriteBuffer(posX * 2, posY, "¡Ü");
	}
}

void Bullet::Destroy()
{

}

Bullet::Bullet()
{
}

Bullet::~Bullet()
{
}
