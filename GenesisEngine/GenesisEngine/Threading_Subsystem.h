#include "stdafx.h"

class Threading_Subsystem {
private:
	Threading_Subsystem();
	~Threading_Subsystem();
	Thread_Manager* threadManager;
	Task_Scheduler* taskScheduler;
public:
	static Threading_Subsystem* initializeSubsystem();
	static void shutDownSubsystem();
};
