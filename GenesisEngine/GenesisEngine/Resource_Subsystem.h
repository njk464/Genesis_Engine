#include "stdafx.h"

class Resource_Subsystem {
private:
	Resource_Subsystem();
	~Resource_Subsystem();
public:
	static Resource_Subsystem* initializeSubsystem();
	static void shutDownSubsystem();
};