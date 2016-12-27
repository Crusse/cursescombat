#include "CursesRenderer.hpp"

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

  // Wait for input
  getch();
}

CursesRenderer::~CursesRenderer() {
  endwin();
}
