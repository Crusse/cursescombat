#ifndef _CCO_ENTITY_H_
#define _CCO_ENTITY_H_

#include <vector>
#include "Weapon.h"

class Entity {

public:

  // Meters
  double width; // if heading == 0, this is along map x coord
  double length; // if heading == 0, this is along map y coord
  double height; // if heading == 0, this is along map z coord
  // Location, meters in map coordinates
  double x;
  double y;
  double z;
  // Degrees, 0 is up
  double heading;
  // Kilometers per hour
  double velocity;
  // Kilograms
  double weight;
};

class Projectile : public Entity {

public:


}

class ThinkingEntity {

public:

  Weapon currentWeapon;
  std::vector<Weapon> weapons;
};

class Human : public ThinkingEntity {

};

class Gun : public ThinkingEntity {

};

/**
 * Has a turret (rotating or fixed).
 */
class Tank : public ThinkingEntity {

};

/**
 * Differs from Tank in that this has no turret.
 */
class ArmoredVehicle : public ThinkingEntity {

};

#endif // _CCO_ENTITY_H_

