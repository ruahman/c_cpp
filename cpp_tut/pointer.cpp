#include <iostream>
#include "pointer.h"

using namespace std;

void pointer_demo(){
  cout << "***** pointer demo *****" << endl;
  int age = 9;
  int *pAge = &age;
  cout << "&age: " << &age << endl;
  cout << "pAge: " << pAge << endl;
  cout << "*pAge: " << *pAge << endl;
}
