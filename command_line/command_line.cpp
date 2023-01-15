#include "../important/include_all.h"

namespace command_line {
	void parse( int argc, char** argv ) {
		if ( argc > 0 ) {
			for ( int i = 0; i < argc; i++ )
				arguments.emplace_back( argv[ i ] );
		}
	}

	bool find( std::string argument ) {
		// NOTE - we should really be doing some sort of
		// fast hashing instead of this
		for ( auto& it : arguments ) {
			if ( it == argument )
				return true;
		}

		return false;
	}
}