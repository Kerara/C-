#pragma once
#include "Object.h"

class Bullet : public Object
{
public:
	virtual void lnit();
	virtual void Update(float dt);
	virtual void Render(float dt);
	virtual void Destroy();
public:
	bool m_Remove = FALSE;

public:
	Bullet();
	~Bullet();

};

