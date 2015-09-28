#include "stdafx.h"
#include "Memory_Allocator.h"

class Memory_Subsystem {
private:
	Memory_Subsystem();
	~Memory_Subsystem();
	Memory_Allocator *allocator;
public:
	static Memory_Subsystem* initializeSubsystem();
	static void shutDownSubsystem();
};
