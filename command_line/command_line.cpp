#include "../important/include_all.h"

namespace command_line {
	void parse( PSTR command_line ) {
		std::string args = command_line;

		// NOTE - please revisit this later, this is not efficient
		// nor good enough for my tastes
		size_t cur_pos = 0;
		auto delim_pos = args.find( "-" );

		while ( delim_pos != std::string::npos ) {
			arguments.emplace_back( args.substr( cur_pos, ( delim_pos - cur_pos ) - 1 ) );
			cur_pos = delim_pos + 1;
			delim_pos = args.find( "-", cur_pos );
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