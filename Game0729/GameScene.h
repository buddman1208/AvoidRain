#pragma once
#include "Object.h"
class GameScene :
	public Object
{
public:
	GameScene();
	virtual ~GameScene();
	
	virtual void Input();
	virtual void Update();
	virtual void Render();
	virtual void Clear();

};

