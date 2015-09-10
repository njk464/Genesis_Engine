#include "stdafx.h"

class Memory_Allocator { // make this an interface...  there should be extentions of this class that actually implement the allocator
private:
public:
	static void* mallocge(int size);
	static void freege(void* ptr);
};
