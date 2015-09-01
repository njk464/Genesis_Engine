#include "stdafx.h"

class Rendering_Subsystem {
private:
	Rendering_Subsystem();
	~Rendering_Subsystem();
public:
	static Rendering_Subsystem* initializeSubsystem();
	static void shutDownSubsystem();
};