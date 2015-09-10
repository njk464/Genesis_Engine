#include "stdafx.h"

template <class T>
class Array {
private:
	T* contents;
	int size;
	int length;
	extend();
	reduce();
public:
	Array();
	Array(int len);
	Array(Array prevContents, int oldLen, int newLen);
	~Array();
	T get(int pos);
	T set(T val,int pos);
	T remove(int pos);
	T removeNoOrder(int pos);
	T removeLast();
	int size();
	bool isEmpty();
	void empty();
	void emptyAndFree();
};
