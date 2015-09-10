#include "Physics_Subsystem.h"

Physics_Subsystem::Physics_Subsystem(){
	// to be implemented
}

Physics_Subsystem::~Physics_Subsystem(){
	// to be implemented
}

Physics_Subsystem* Physics_Subsystem::initializeSubsystem(){
	// to be implemented
	return nullptr;
}

void Physics_Subsystem::shutDownSubsystem(){
	// to be implemented
}

CollisionEngine* Physics_Subsystem::getCollisionEngine() { return collisionEngine; }
CullingManager* Physics_Subsysten::getCullingManager() { return cullingManager; }
