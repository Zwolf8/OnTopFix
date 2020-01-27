#include <Windows.h>

int main()
{
	HWND hWnd = FindWindowA(NULL, "Roblox");
	SetWindowPos(hWnd, HWND_NOTOPMOST, 0, 0, 0, 0, 0);
}
