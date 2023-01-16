#include "../important/include_all.h"

namespace windows {
	void initialize( HINSTANCE instance, int show_cmd ) {
		console = new c_console_window( "console", instance, show_cmd );
	}

	void unload( ) {
		delete console;
	}
}