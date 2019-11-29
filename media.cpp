#include <iostream>
#include <string.h>
#include "media.h"

using namespace std;

media::media() {

}

int media::getType() {
  return 0;
}

int* media::getYear() {
  return &year;
}

char* media::getName() {
  return name;
}
