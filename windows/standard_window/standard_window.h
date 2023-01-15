#pragma once

class c_standard_window {
public:
	std::string m_name = "";
	virtual void wnd_proc( HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam ) = 0;
};