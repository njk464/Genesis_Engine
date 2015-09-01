#include "stdafx.h"

class Audio_Subsystem {
private:
	Audio_Subsystem();
	~Audio_Subsystem();
public:
	static Audio_Subsystem* initializeSubsystem();
	static void shutDownSubsystem();
};
