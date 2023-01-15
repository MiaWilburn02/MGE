#include "../important/include_all.h"

namespace hashing {
	unsigned fnv1_a( std::string string ) {
		unsigned hash = 0x811c9dc5;

		for ( auto& it : string ) {
			hash ^= it;
			hash *= 0x01000193;
		}

		return hash;
	}
}