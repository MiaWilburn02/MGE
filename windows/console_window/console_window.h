#pragma once

class c_console_window : public c_standard_window {
public:
	c_console_window( std::string name, vec2_t size, HINSTANCE instance, int show_cmd );
};