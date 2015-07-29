#pragma once
#include "Object.h"
class MainScene :
	public Object
{
private:
	int index;
public:
	MainScene();
	virtual ~MainScene();

	virtual void Input();
	virtual void Update();
	virtual void Render();
	virtual void Clear();

};

