#ifndef _CCO_MAP_H_
#define _CCO_MAP_H_

#include <vector>
#include "Tile.h"
#include "Entity.h"

const double MAP_METERS_PER_TILE = 5;

class Map {

public:

  Map( std::vector<Tile> tileList, std::vector<Entities> entityList );

private:

  std::vector<Tile> tiles;
  std::vector<Entity> entities;

  Tile getTileForEntity( Entity ent );
};

#endif // _CCO_MAP_H_

