#ifndef MEDIA_H
#define MEDIA_H
#include <iostream>
#include <cstring>

using namespace std;

class media {
 public:
  media();
  char* getName();
  int* getYear();
  virtual int getType();
 private:
  char name[50];
  int year;
};
#endif
