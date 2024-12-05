#ifndef DINPUTINPUT_H
#define DINPUTINPUT_H

#define DIRECTINPUT_VERSION  0x0800
#include <dinput.h>

typedef HRESULT(WINAPI* DIRECTINPUTCREATEAPROC)(HINSTANCE, DWORD, LPDIRECTINPUTA*, LPUNKNOWN);
typedef HRESULT(WINAPI* DIRECTINPUTCREATEWPROC)(HINSTANCE, DWORD, LPDIRECTINPUTW*, LPUNKNOWN);
typedef HRESULT(WINAPI* DIRECTINPUTCREATEEXPROC)(HINSTANCE, DWORD, REFIID, LPDIRECTINPUT7A*, LPUNKNOWN);
typedef HRESULT(WINAPI* DIRECTINPUT8CREATEPROC)(HINSTANCE, DWORD, REFIID, LPDIRECTINPUT8*, LPUNKNOWN);
typedef HRESULT(WINAPI* DICREATEDEVICEPROC)(IDirectInputA*, REFGUID, LPDIRECTINPUTDEVICEA*, LPUNKNOWN);
typedef HRESULT(WINAPI* DICREATEDEVICEEXPROC)(IDirectInputA*, REFGUID, REFIID, LPDIRECTINPUTDEVICEA*, LPUNKNOWN);
typedef HRESULT(WINAPI* DIDSETCOOPERATIVELEVELPROC)(IDirectInputDeviceA*, HWND, DWORD);
typedef HRESULT(WINAPI* DIDGETDEVICEDATAPROC)(IDirectInputDeviceA*, DWORD, LPDIDEVICEOBJECTDATA, LPDWORD, DWORD);
typedef HRESULT(WINAPI* DIDGETDEVICESTATEPROC)(IDirectInputDeviceA*, DWORD, LPVOID);

extern BOOL g_dinput_hook_active;

extern DIRECTINPUTCREATEAPROC real_DirectInputCreateA;
extern DIRECTINPUTCREATEWPROC real_DirectInputCreateW;
extern DIRECTINPUTCREATEEXPROC real_DirectInputCreateEx;
extern DIRECTINPUT8CREATEPROC real_DirectInput8Create;

HRESULT WINAPI fake_DirectInputCreateA(HINSTANCE hinst, DWORD dwVersion, LPDIRECTINPUTA* lplpDirectInput, LPUNKNOWN punkOuter);
HRESULT WINAPI fake_DirectInputCreateW(HINSTANCE hinst, DWORD dwVersion, LPDIRECTINPUTW* lplpDirectInput, LPUNKNOWN punkOuter);
HRESULT WINAPI fake_DirectInputCreateEx(HINSTANCE hinst, DWORD dwVersion, REFIID riidltf, LPDIRECTINPUT7A* ppvOut, LPUNKNOWN punkOuter);
HRESULT WINAPI fake_DirectInput8Create(HINSTANCE hinst, DWORD dwVersion, REFIID riidltf, LPDIRECTINPUT8* ppvOut, LPUNKNOWN punkOuter);

void dinput_hook_init();
void dinput_hook_exit();

#endif
