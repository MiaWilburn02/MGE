#pragma once

namespace windows {
	inline c_console_window* console = nullptr;

	void initialize( HINSTANCE instance, int show_cmd );
	void unload( );
}