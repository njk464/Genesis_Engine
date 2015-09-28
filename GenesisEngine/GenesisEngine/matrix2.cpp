#include "matrix2.h"

Matrix2::Matrix2():aa(0),ab(0),ba(0),bb(0) {}

Matrix2::Matrix2(GLfloat a,GLfloat b,GLfloat c,GLfloat d):aa(a),ab(b),ba(c),bb(d) {}

// operators

// getter methods
GLfloat Matrix2::getAA(){return aa;}
GLfloat Matrix2::getAB(){return ab;}
GLfloat Matrix2::getBA(){return ba;}
GLfloat Matrix2::getBB(){return bb;}

// setter methods
void Matrix2::setAA(GLfloat param){aa=param;}
void Matrix2::setAB(GLfloat param){ab=param;}
void Matrix2::setBA(GLfloat param){ba=param;}
void Matrix2::setBB(GLfloat param){bb=param;}
