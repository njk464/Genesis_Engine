#include "stdafx.h"

class GamePlay_Subsystem {
private:
	GamePlay_Subsystem();
	~GamePlay_Subsystem();
public:
	static GamePlay_Subsystem* initializeSubsystem();
	static void shutDownSubsystem();
};
