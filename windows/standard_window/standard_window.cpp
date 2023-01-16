#include "../../important/include_all.h"

void c_standard_window::initialize_window( HINSTANCE instance, int show_cmd, WNDPROC wnd_proc ) {
	WNDCLASS window_class = { };
	window_class.lpszClassName = this->m_name.c_str( );
	window_class.lpfnWndProc = wnd_proc;
	window_class.hInstance = instance;

	if ( !RegisterClassA( &window_class ) )
		logging::error( std::format( "failed to register {}", this->m_name ) );
	
	this->m_hwnd = CreateWindowExA(
		0,
		this->m_name.c_str( ),
		this->m_name.c_str( ),
		WS_SYSMENU,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		static_cast< int >( this->m_size.x ),
		static_cast< int >( this->m_size.y ),
		nullptr,
		nullptr,
		instance,
		nullptr
	);

	ShowWindow( this->m_hwnd, show_cmd );
}