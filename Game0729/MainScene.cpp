#include "MainScene.h"
#include"InputManager.h"
#include<iostream>
#include"Director.h"
#include"func.h"
#include"GameScene.h"
#include<Windows.h>
using namespace std;
MainScene::MainScene()
	:index(0)
{
	setColor(0, 0);
	system("cls");
	cout << "MainScene Printing" << endl;
	printFrame(15,10);
	moveto(6, 5);
	cout << "▶게임시작";
	moveto(6, 6);
	cout << "--게임종료";
}


MainScene::~MainScene()
{
}

void MainScene::Input()
{
	if (InputManager::GetInstance()->keyState(VK_UP) == 1)
	{
		index = 0;
		moveto(6, 5); cout << "▶";
		moveto(6, 6); cout << "--";
	}
	else if (InputManager::GetInstance()->keyState(VK_DOWN) == 1)
	{
		index = 1;
		moveto(6, 5); cout << "--";
		moveto(6, 6); cout << "▶";
	}
	if (InputManager::GetInstance()->keyState(VK_RETURN) == 1)
	{
		Director *dir = (Director*)this->getParent();
		switch (index) {
		case 0 :
			dir->ChangeScene(new GameScene());
			return;
			break;
		case 1:
			dir->game = false;
			break;
		}
	}
}
void MainScene::Update()
{
}

void MainScene::Render() {

}

void MainScene::Clear() {

}
