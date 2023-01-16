#include "../../important/include_all.h"

void c_standard_window::initialize_window( HINSTANCE instance, int /*show_cmd*/, WNDPROC wnd_proc ) {
	WNDCLASS window_class = { };
	window_class.lpszClassName = this->m_name.c_str( );
	window_class.lpfnWndProc = wnd_proc;
	window_class.hInstance = instance;

	if ( !RegisterClassA( &window_class ) )
		logging::error( std::format( "failed to register {}", this->m_name ) );
}