#include "stdafx.h"
#include "CollisionEngine.h"
#include "CullingManager.h"

class Physics_Subsystem {
private:
	Physics_Subsystem();
	~Physics_Subsystem();
	CollisionEngine* collisionEngine;
	CullingManager* cullingManager;
public:
	static Physics_Subsystem* initializeSubsystem();
	static void shutDownSubsystem();
	// getter methods
	CollisionEngine* getCollisionEngine();
	CullingManager* getCullingManager();
};
