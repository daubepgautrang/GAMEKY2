#define KEYBOARD_BUFFER_SIZE 1024
#define DIRECTINPUT_VERSION 0x0800

#include "DirectXLibrary.h"
#include "Utils.h"

class Keyboard
{
	static Keyboard* __instance;
	LPDIRECTINPUT8       di;		// The DirectInput object         
	LPDIRECTINPUTDEVICE8 didv;		// The keyboard device 
	BYTE  keyStates[256];			// DirectInput keyboard state buffer 
	DIDEVICEOBJECTDATA keyEvents[KEYBOARD_BUFFER_SIZE];		// Buffered keyboard data
public:
	void Init(HWND hWnd);
	void Process();
	void OnKeyDown(int key);
	void OnKeyUp(int key); 
	bool IsKeyDown(int key); 
	static Keyboard* GetInstance();
};