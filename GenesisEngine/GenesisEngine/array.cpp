#include "array.h"

Array::Array(){
	// to be implemented
}

Array::Array(int len){
	// to be implemented
}

// this may not be needed
Array::Array(Array prevContents, int oldLen, int newLen){
	// to be implemented
}

~Array::Array(){
	// to be implemented
}

T Array::get(int pos){
	// to be implemented
	return 0;
}

T Array::set(T val, int pos){
	// to be implemented
	return 0;
}

T Array::remove(int pos){
	// to be implemented
	return 0;
}

// A fast remove method that does not preserve order
T removeNoOrder(int pos){
	// to be implemented
	return 0;
}

T Array::removeLast(){
	// to be implemented
	return 0;
}

int Array::size(){
	return size;
}

bool Array::isEmpty(){
	return size==0;
}

void Array::empty(){
	// to be implemented
}

void Array::emptyAndFree(){
	// to be implemented
}
