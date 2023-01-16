#pragma once

namespace command_line {
	inline std::deque< std::string > arguments = { };
	void parse( PSTR command_line );
	bool find( std::string argument );
}