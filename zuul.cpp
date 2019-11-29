#include <iostream>
#include <cstring>
#include <vector>
#include "room.h"

using namespace std;

int main() {
  room* r1 = new room();
  strcpy(r1->getName(), "Room 1");
  cout << r1->getName() << endl;




  
}
