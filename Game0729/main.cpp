#include<iostream>
#include<Windows.h>
#include"func.h"
#include "InputManager.h"
#include"Director.h"
#include"MainScene.h"

using namespace std;
int main() {
	Director *director = new Director(new MainScene());

	while (director->game) {
		director->Input();
		director->Update();
		director->Render();
		Sleep(33);
		director->Clear();
	}
	delete director;
	return 0;
}