#include "../important/include_all.h"

namespace windows {
	void initialize( ) {
		console = new c_console_window( "console" );
	}

	void unload( ) {
		delete console;
	}
}