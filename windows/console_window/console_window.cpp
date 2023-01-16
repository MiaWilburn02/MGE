#include "../../important/include_all.h"

LRESULT CALLBACK wnd_proc( HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam ) {
	return DefWindowProcA( hwnd, msg, wparam, lparam );
}

c_console_window::c_console_window( std::string name, vec2_t size, HINSTANCE instance, int show_cmd ) {
	this->m_name = name;
	this->m_size = size;
	this->initialize_window( instance, show_cmd, wnd_proc );
}