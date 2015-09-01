#include "stdafx.h"

class Event_Subsystem {
private:
	Event_Subsystem();
	~Event_Subsystem();
public:
	static Event_Subsystem* initializeSubsystem();
	static void shutDownSubsystem();
};
