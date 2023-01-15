#pragma once

namespace command_line {
	inline std::deque< std::string > arguments = { };
	void parse( int argc, char** argv );
	bool find( std::string argument );
}