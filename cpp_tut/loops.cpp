
#include <iostream>

using namespace std;

void loops_demo(){
  cout << "***** loop demo *****" << endl;
  int index = 1;
  while(index < 10){
    cout << "index: " << index << endl;
    index++;
  }

  for(int i = 0; i < 10; i++){
    cout << "i: " << i << endl;
  }
}
