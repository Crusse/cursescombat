#ifndef _CCO_MAP_H_
#define _CCO_MAP_H_

#include <vector>
#include "Tile.h"
#include "Entity.h"

class Map {

public:
  Map( std::vector<Tile> tileList, std::vector<Entities> entityList );

private:
  std::vector<Tile> tiles;
  std::vector<Entity> entities;
};

#endif // _CCO_MAP_H_
