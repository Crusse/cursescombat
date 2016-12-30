#include <ncursesw/curses.h>
#include <clocale>
#include <string>
#include <bitset>

#include "CursesRenderer.h"
#include "../game/Map.h"

CursesRenderer::CursesRenderer() {

  setlocale( LC_ALL, "" );

  initscr();
  cbreak();
  noecho();
  nonl();
  intrflush( stdscr, false );
  keypad( stdscr, true );
  curs_set( 0 );
  clear();
}

void refreshWindowDimensions() {
  
  int startX = 0;
  int startY = 0;
  int maxX = 0;
  int maxY = 0;

  getbegyx( stdscr, startY, startX );
  getmaxyx( stdscr, maxY, maxX );

  winW = maxX - startX;
  winH = maxY - startY;
}

void CursesRenderer::draw( const Map &map ) {

  refreshWindowDimensions();  

  move( 10, 10 );
  addwstr( L"Char: " );

  wint_t ch;
  // Wait for input
  get_wch( &ch );
  wchar_t wch = ch;
  const cchar_t cch = { A_BOLD, wch };

  add_wch( &cch );
  addstr( " (bin: " );
  addstr( std::bitset<sizeof( wchar_t ) * 8>( wch ).to_string().c_str() );
  addstr( ")" );

  refresh();
}

CursesRenderer::~CursesRenderer() {
  endwin();
}

