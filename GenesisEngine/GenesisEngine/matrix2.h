#include "stdafx.h"

class Matrix2 {
private:
	GLfloat aa;
	GLfloat ab;
	GLfloat ba;
	GLfloat bb;
public:
	Matrix2();
	Matrix2(GLfloat a,GLfloat b,GLfloat c,GLgloat d);
	// operations
	// getters
	GLfloat getAA();
	GLfloat getAB();
	GLfloat getBA();
	GLfloat getBB();
	// setters
	void setAA(GLfloat param);
	void setAB(GLfloat param);
	void setBA(GLfloat param);
	void setBB(GLfloat param);
};
