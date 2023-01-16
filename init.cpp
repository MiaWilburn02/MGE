#include "important/include_all.h"

int APIENTRY WinMain( HINSTANCE instance, HINSTANCE /*prev_instance*/, PSTR command_line, int show_cmd ) {
	logging::info( "MGE init" );

	// go ahead and parse all of our command line
	// arguments before we continue
	// NOTE - there's definitely a better way we can achieve this
	command_line::parse( command_line );

	// setup all our windows
	windows::initialize( instance, show_cmd );

	for ( ;; ) { }

	// free any allocated memory etc
	windows::unload( );

	return 0;
}