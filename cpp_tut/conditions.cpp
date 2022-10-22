#include <iostream>
#include "conditions.h"

using namespace std;

void conditions_demo(){
  cout << "***** conditions demo *****" << endl;
  bool isMale = true;
  bool isTall = false;

  if(isMale && isTall){
    cout << "I am a male and tall" << endl;
  }
  else if (isMale && !isTall) {
    cout << "I am a male and not tall" << endl;
  }
  else {
    cout << "I am a femail" << endl;
  }


  int dayNum = 0;

  switch(dayNum){
    case 0:
      cout << "zero" << endl;
      break;
    case 1:
      cout << "one" << endl;
      break;
    default:
      cout << "any number" << endl;
  }
}
