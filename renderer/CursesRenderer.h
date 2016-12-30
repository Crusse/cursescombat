#include "Renderer.h"
#include "../game/Map.h"

class CursesRenderer : public Renderer {

public:
  CursesRenderer();
  void draw( const Map & );
  ~CursesRenderer();
};

