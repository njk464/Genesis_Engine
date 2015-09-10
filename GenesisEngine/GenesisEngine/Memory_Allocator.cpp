#include "Memory_Allocator.h"

// this class is implemented temporarily
// this class will be an interface in the future

void* Memory_Allocator::mallocge(int size){
	return malloc(size);
}

void Memory_Allocator::freege(void* ptr){
	free(ptr);
}
