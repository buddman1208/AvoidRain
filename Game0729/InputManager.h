#pragma once
class InputManager
{
	// ½Ì±ÛÅæ
private:
	static bool lkey[256];
	static bool rkey[256];
	static InputManager *instance;
public:
	InputManager();
	~InputManager();

	static void getKey();
	static int keyState(int key);
	static InputManager* GetInstance() {
		if (instance == nullptr) {
			instance = new InputManager();
		}
		return instance;
	}
};

