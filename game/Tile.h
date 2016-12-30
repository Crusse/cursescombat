#ifndef _CCO_TILE_H_
#define _CCO_TILE_H_

/**
 * Each Tile covers an area of 5*5 meters of the game map (same as the original
 * Close Combat games).
 */
struct Tile {

  // In meters
  double height = 0;
  // How difficult the tile is to break/destroy/clear/flatten
  double toughness = 1;
  // How well this Tile covers entities behind it from missiles
  double cover = 1;
  // How well this Tile conceals entities behind it
  double concealment = 1;

  /**
   * The semantics of this depend on the tile type. Usually this means
   * destroying a wall or flattening a bush.
   */
  void clear();
};

struct GrassTile : Tile {

  
};

struct RoadTile : Tile {

  
};

struct BushTile : Tile {

  
};

struct TreeTrunkTile : Tile {

  
};

struct RubbleTile : Tile {

  
};

struct RockTile : Tile {

  
};

struct HouseInteriorTile : Tile {

  
};

struct BrickWallTile : Tile {

  
};

struct WoodWallTile : Tile {

  
};

struct TrenchTile : Tile {

  
};

#endif // _CCO_TILE_H_

