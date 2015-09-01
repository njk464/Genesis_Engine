#include "stdafx.h"

class Network_Subsystem {
private:
	Network_Subsystem();
	~Network_Subsystem();
public:
	static Network_Subsystem* initializeSubsystem();
	static void shutDownSubsystem();
};
