#pragma once

class c_standard_window {
public:
	std::string m_name = "";
	vec2_t m_size = { 0, 0 };
	HWND m_hwnd = nullptr;

	void initialize_window( HINSTANCE instance, int show_cmd, WNDPROC wnd_proc );
};