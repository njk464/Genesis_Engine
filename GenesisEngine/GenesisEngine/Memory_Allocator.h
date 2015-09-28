#include "stdafx.h"

class Memory_Allocator { // make this an interface...  there should be extentions of this class that actually implement the allocator
private:
public:
	virtual void* mallocge(int size);
	virtual void freege(void* ptr);
};
