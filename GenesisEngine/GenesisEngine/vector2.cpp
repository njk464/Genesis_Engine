#include "vector2.h"
#include "zmath.h"

Vector2::Vector2(){
	x = 0.0f;
	y = 0.0f;
}

Vector2::Vector2(float one,float two){
	x = one;
	y = two;
}

Vector2* Vector2::add(Vector2* other){
	// to be implemented
	return nullptr;
}

Vector2* Vector2::neg(){
	// to be implemented
	return nullptr;
}

float dot(Vector2* other){
	return x*other.x + y*other.y;
}

Vector2* Vector2::normal(){
	// to be implemented
	return nullptr;
}

float Vector2::mag(){
	// to be implemented
	return 0.0f;
}

float Vector2::cheapMag(){
	// to be implemented
	return 0.0f;
}

Vector3* Vector2::convertToThreeSpace(){
	// to be implemented
	return nullptr;
}

Vector4* Vector2::convertToFourSpace(){
	// to be implemented
	return nullptr;
}
