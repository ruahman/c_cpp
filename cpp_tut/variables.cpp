
#include <iostream>
#include <cmath>
#include "variables.h"

using namespace std;

void variables_demo(void) {
  cout << "***** demo variables *****" << endl;

  string charName = "John";
  int charAge;
  charAge = 35;
  char grade = 'A';
  double gpa = 3.3;
  bool isMale = true;

  cout << "charName: " << charName << endl;
  cout << "charAge: " << charAge << endl;
  cout << "grade: " << grade << endl;
  cout << "gpa: " << gpa << endl;
  cout << "isMale: " << isMale << endl;
  cout << "charName.lenght: " << charName.length() << endl;
  cout << "pow(2,5): " << pow(2,5) << endl;

  // input
  /* int age; */
  /* cout << "enter age: "; */
  /* cin >> age; */

  /* cout << "age: " << age << endl; */

  string sname;
  cout << "enter name: ";
  getline(cin, sname);
  cout << "name: " << sname << endl;

}
