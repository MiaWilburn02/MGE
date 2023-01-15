#include "../important/include_all.h"

namespace command_line {
	void parse( int argc, char** argv ) {
		if ( argc > 0 ) {
			for ( int i = 0; i < argc; i++ )
				arguments.emplace_back( argv[ i ] );
		}
	}

	bool find( std::string argument ) {
		auto hashed_argument = hashing::fnv1_a( argument );

		for ( auto& it : arguments ) {
			if ( hashing::fnv1_a( it ) == hashed_argument )
				return true;
		}

		return false;
	}
}