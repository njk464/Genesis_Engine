#include "stdafx.h"

class UI_Subsystem {
private:
	UI_Subsystem();
	~UI_Subsystem();
public:
	static UI_Subsystem* initializeSubsystem();
	static void shutDownSubsystem();
};
