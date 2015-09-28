#include "stdafx.h"

class GamePlay_Subsystem {
private:
	GamePlay_Subsystem();
	~GamePlay_Subsystem();
	Scene_Manager* sceneManager; 
public:
	static GamePlay_Subsystem* initializeSubsystem();
	static void shutDownSubsystem();
};
