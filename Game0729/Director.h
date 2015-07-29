#pragma once
#include"Object.h"
class Director :
	public Object
{
private:
	Object *m_pScene;
public:
	Director(Object *scene);
	virtual ~Director();

	virtual void Input();
	virtual void Update();
	virtual void Render();
	virtual void Clear();
	void ChangeScene(Object *p);
	bool game;
};

