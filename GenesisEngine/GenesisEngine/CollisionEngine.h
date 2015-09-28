#include "stdafx.h"

class CollisionEngine {
private:
public:
	virtual Array<Collision*>* findCollisions(Array<PhysicsBody*> entities);
	virtual void handleCollision(Array<Collision*> collisions);
};
