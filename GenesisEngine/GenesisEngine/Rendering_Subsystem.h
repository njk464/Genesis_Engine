#include "stdafx.h"

class Rendering_Subsystem {
private:
	Rendering_Subsystem();
	~Rendering_Subsystem();
	Camera_SubSystem *cameraSystem;
public:
	static Rendering_Subsystem* initializeSubsystem();
	static void shutDownSubsystem();
};
