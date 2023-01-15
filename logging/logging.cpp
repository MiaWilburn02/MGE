#include "../important/include_all.h"

namespace logging {
	// todo: update formatting
	// [time] [type] [text]
	// add option to spit to file aswell
	void info( std::string text ) {
		printf_s( "[INFO] %s\n", text.c_str( ) );
	}

	void warning( std::string text ) {
		printf_s( "[WARNING] %s\n", text.c_str( ) );
	}

	void error( std::string text ) {
		printf_s( "[ERROR] %s\n", text.c_str( ) );
	}
}