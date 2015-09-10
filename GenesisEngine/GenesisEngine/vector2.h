#include "stdafx.h"
#include "vector3.h"
#include "vector4.h"

class Vector2 {
private:
public:
	// all instance variables will be public to save time since this class will be used a lot
	// and will be continuously changed every frame.

	// instance variables
	float x;
	float y;
	// constructors
	Vector2();
	Vector2(float one,float two);
	// methods
	Vector2* add(Vector2* other);
	Vector2* neg();
	float dot(Vector2* other); // make into an operator
	Vector2* normal();
	float mag();
	float cheapMag();
	Vector3* convertToThreeSpace();
	Vector4* convertToFourSpace();
};
