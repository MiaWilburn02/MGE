#pragma once

class c_standard_window {
public:
	std::string m_name = "";

	void initialize_window( HINSTANCE instance, int show_cmd, WNDPROC wnd_proc );
};