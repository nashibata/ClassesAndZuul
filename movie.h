#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>
#include <cstring>

using namespace std;

class movie {
 public:
  movie();
  char* getName();
  char* getDirector();
  int* getYear();
  int* getLength();
  float* getRating();
  int getType();
 private:
  char name[50];
  char director[50];
  int year;
  int length;
  float rating;
};
#endif
