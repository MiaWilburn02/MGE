#include "../important/include_all.h"

namespace windows {
	void initialize( HINSTANCE instance, int show_cmd ) {
		console = new c_console_window( "console", vec2_t( 640, 480 ), instance, show_cmd );
	}

	void unload( ) {
		delete console;
	}
}