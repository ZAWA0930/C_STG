#include "DxLib.h"
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	DxLib_Init();
	LoadGraphScreen(288, 400, "player.bmp", FALSE);
	WaitKey();
	DxLib_End();
	return 0;
}
