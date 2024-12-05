#ifndef WNDPROC_H
#define WNDPROC_H

#define WM_AUTORENDERER WM_APP+111
#define WM_WINEFULLSCREEN WM_APP+112
#define WM_D3D9DEVICELOST WM_APP+113
#define WM_SIZE_DDRAW WM_APP+114
#define WM_MOVE_DDRAW WM_APP+115
#define WM_DISPLAYCHANGE_DDRAW WM_APP+116
#define WM_TOGGLE_FULLSCREEN WM_APP+117
#define WM_TOGGLE_MAXIMIZE WM_APP+118
#define WM_RESTORE_STYLE WM_APP+119

#define IDT_TIMER_LEAVE_BNET 541287654
#define IDT_TIMER_LINUX_FIX_WINDOW_SIZE 345267753

#define CNC_DDRAW_SET_FULLSCREEN 1
#define CNC_DDRAW_SET_WINDOWED 2

#ifndef WM_UNICHAR
#define WM_UNICHAR 0x0109
#endif

LRESULT CALLBACK fake_WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

#endif