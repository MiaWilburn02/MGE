#include "../important/include_all.h"

namespace logging {
	// todo: update formatting
	// [time] [type] [text]
	// add option to spit to file aswell
	// todo: revisit once console is setup for info & warning
	void info( std::string text ) {
		printf_s( "[INFO] %s\n", text.c_str( ) );
	}

	void warning( std::string text ) {
		printf_s( "[WARNING] %s\n", text.c_str( ) );
	}

	void error( std::string text ) {
		MessageBoxA( nullptr, text.c_str( ), "ERROR", MB_OK );
	}
}