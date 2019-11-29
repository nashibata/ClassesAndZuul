//header guards
#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <cstring>

using namespace std;

class game {
 public:
  game();
  char* getName();
  int* getYear();
  char* getPublisher();
  float* getRating();
  virtual int getType(); //tejash told me that you have to call virtual int since it comes from the media class
 private:
  char name[50];
  int year;
  char publisher[50];
  float rating;
};
#endif
