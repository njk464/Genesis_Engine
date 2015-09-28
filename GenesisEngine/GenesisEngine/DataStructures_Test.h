#include "stdafx.h"

class DataStructuresTest : public Test{
private:
  Array<int> nums;
  Array<int*> numsptr;
  Array<Array<float>*>* array2D;
public:
  DataStructuresTest();
  ~DataStructuresTest();
  virtual int runTest();
  int runArrayTest();
  int runStackTest();
  int runQueueTest();
  int runVectorTest();
  int runMatrixTest();
};
