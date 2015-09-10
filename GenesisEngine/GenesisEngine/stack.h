#include "stdafx.h"
#include "Memory_Allocator.h"

template <typename T>
struct StackNode {
	T value;
	*StackNode next;
};

template <class T>
class Stack {
private:
	*StackNode end;
	*StackNode beginning;
	int size;
public:
	Stack();
	~Stack();
	void push(T val);
	T pop();
	T peek();
};
