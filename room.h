#ifndef ROOM_H
#define ROOM_H
#include <iostream>
#include <cstring>
#include <vector>
#include <map>

using namespace std;

//class for rooms
class room{
 public: //public area
  room();
  char* getName();
  char* getDescription();
  map<const char*, room*>* getExits();
  bool isValidRoom();
  room* getExitRoom(char*);
  void getExitDirections();
 private: //private vaiables
  char name[100];
  char description[1000];
  map<const char*, room*> exits;
};
#endif
