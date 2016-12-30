#include "renderer/CursesRenderer.h"

int main( int argc, char* argv[] ) {

  CursesRenderer renderer;
  Map map;

  // The main game loop
  while ( true ) {
    
    renderer.draw( map );
  }

  return 0;
}

