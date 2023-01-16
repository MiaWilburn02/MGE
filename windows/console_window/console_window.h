#pragma once

class c_console_window : public c_standard_window {
public:
	c_console_window( std::string name, HINSTANCE instance, int show_cmd );
};