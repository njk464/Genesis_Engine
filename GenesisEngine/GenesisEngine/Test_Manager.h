#include "stdafx.h"

class Test_Manager{
private:
  Array<Test*>* tests;
  int passed;
  int failed;
public:
  Test_Manager();
  ~Test_Manager();
  void initializeTests();
  void runAllTests();
  void destroyTests();
};
