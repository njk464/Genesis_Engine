#include "stdafx.h"

class Threading_Subsystem {
private:
	Threading_Subsystem();
	~Threading_Subsystem();
public:
	static Threading_Subsystem* initializeSubsystem();
	static void shutDownSubsystem();
};