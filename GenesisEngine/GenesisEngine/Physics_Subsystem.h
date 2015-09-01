#include "stdafx.h"

class Physics_Subsystem {
private:
	Physics_Subsystem();
	~Physics_Subsystem();
public:
	static Physics_Subsystem* initializeSubsystem();
	static void shutDownSubsystem();
};
