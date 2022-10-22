
#include <iostream>

using namespace std;

string sayHi(string txt, int age) {
  cout << txt << age << endl;
  return "hello from sayHi";
}

void functions_demo(){
  cout << "***** functions demo *****" << endl;
  string res = sayHi("foobar", 23);
  cout << "res: " << res << endl;
}
