#include "stdafx.h"

class AI_Subsystem {
private:
	AI_Subsystem();
	~AI_Subsystem();
public:
	static AI_Subsystem* initializeSubsystem();
	static void shutDownSubsystem();
};
