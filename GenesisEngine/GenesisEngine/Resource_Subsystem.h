#include "stdafx.h"

class Resource_Subsystem {
private:
	Resource_Subsystem();
	~Resource_Subsystem();
	Mesh_Container* meshes;
public:
	static Resource_Subsystem* initializeSubsystem();
	static void shutDownSubsystem();
};
