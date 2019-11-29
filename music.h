#ifndef MUSIC_H
#define MUSIC_H
#include <iostream>
#include <cstring>

using namespace std;

class music {
 public:
  music();
  char* getName();
  char* getArtist();
  int* getYear();
  int* getLength();
  char* getPublisher();
  virtual int getType();
 private:
  char name[50];
  char artist[50];
  int year;
  int length;
  char publisher[50];
};
#endif
