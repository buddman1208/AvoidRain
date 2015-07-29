#include"func.h"
#include<Windows.h>
#include<iostream>
using namespace std;
void moveto(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void setColor(int bgcolor, int fontcolor) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), bgcolor * 16 + fontcolor);
}
void printFrame(int w, int h) {
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (i == 0 || j == 0 || i == h - 1 || j == w - 1) {
				setColor(15,5);
				cout << "¢É";
			}
			else {
				setColor(15, 15);
				cout << "  ";
			}
		}
		cout << endl;
	}
}