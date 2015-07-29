#include "InputManager.h"
#include<Windows.h>
bool InputManager::lkey[256];
bool InputManager::rkey[256];
InputManager *InputManager::instance = nullptr;
InputManager::InputManager()
{
	for (int i = 0; i < 256; i++) {
		lkey[i] = rkey[i] = false;
	}
}
InputManager::~InputManager()
{
}
void InputManager::getKey() {
	for (int i = 0; i < 256; i++) {
		lkey[i] = rkey[i];



		rkey[i] = (bool)(GetKeyState(i) & 0x8000);
	}
}
int InputManager::keyState(int key) {
	if (lkey[key] == true && rkey[key] == true) return 2;
	if (lkey[key] == false && rkey[key] == true) return 1;
	if (lkey[key] == true && rkey[key] == false) return -1;
	return 0;
}
