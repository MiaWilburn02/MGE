#include "important/include_all.h"

int main( int argc, char** argv ) {
	logging::info( "MGE init" );

	// go ahead and parse all of our command line
	// arguments before we continue
	// NOTE - there's definitely a better way we can achieve this
	command_line::parse( argc, argv );

	for ( ;; ) {

	}

	return 0;
}