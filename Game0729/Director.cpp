#include "Director.h"
#include"InputManager.h"

Director::Director(Object *scene)
	:game(true), m_pScene(nullptr) {
	m_pScene = nullptr;
	this->ChangeScene(scene);
}
Director::~Director()
{
	delete m_pScene;
	delete InputManager::GetInstance();
}

void Director::Input() {
	//InputManager::getKey();
	InputManager::GetInstance()->getKey();
	m_pScene -> Input();
}
void Director::Update() {
	m_pScene->Update();
}
void Director::Render() {
	m_pScene->Render();
}
void Director::Clear() {
	m_pScene->Clear();
}

void Director::ChangeScene(Object *p) {
	if(m_pScene!=nullptr) delete m_pScene;
	m_pScene = p;
	p->setParent(this);
}

