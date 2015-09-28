#include "stdafx.h"

class Filer_Subsystem {
private:
	Filer_Subsystem();
	~Filer_Subsystem();
	ObjParser* objParser;
public:
	static Filer_Subsystem* initializeSubsystem();
	static void shutDownSubsystem();
};
