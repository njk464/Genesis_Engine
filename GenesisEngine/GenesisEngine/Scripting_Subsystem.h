#include "stdafx.h"

class Scripting_Subsystem {
private:
	Scripting_Subsystem();
	~Scripting_Subsystem();
public:
	static Scripting_Subsystem* initializeSubsystem();
	static void shutDownSubsystem();
};
