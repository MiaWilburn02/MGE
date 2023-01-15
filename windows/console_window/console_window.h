#pragma once

class c_console_window : public c_standard_window {
public:
	c_console_window( std::string name );
	void wnd_proc( HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam ) override;
};