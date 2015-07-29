#include<Windows.h>
#include"GameScene.h"
#include"func.h"
#include<iostream>
using namespace std;
GameScene::GameScene()
{
	system("cls");
	cout << "GameScene Printing" << endl;
}

GameScene::~GameScene()
{
}

void GameScene::Input() {
	cout << "GameScene Input" << endl;
}
void GameScene::Update() {
	cout << "GameScene Update" << endl;
}
void GameScene::Render() {
	cout << "GameScene Render" << endl;
}
void GameScene::Clear() {
	cout << "GameScene Clear" << endl;
}