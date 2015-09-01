#include "stdafx.h"
#include "Logger.h"

class Profiling_Subsystem {
private:
	Profiling_Subsystem();
	~Profiling_Subsystem();
	Logger *logger;
public:
	static Profiling_Subsystem* initializeSubsystem();
	static void shutDownSubsystem();
};