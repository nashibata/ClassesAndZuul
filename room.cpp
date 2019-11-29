#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include "room.h"

using namespace std;

room::room(){ //constructor

}

char* room::getName() { //returns the name of any given room
  return name;
}

char* room::getDescription() { //returns the description
  return description;
}

map<const char*, room*>* room::getExits() { //returns pointer map of exits
  return &exits;
}

bool room::isValidRoom(char* room) { //function returns true if the name of the room is the same os the one inputted
  map<const char*, room*>::iterator i;
  for(i = this->exits.begin(); i != this->exits.end(); ++i) {
    if(strcmp(i->first, room) == 0) {
      return true;
    }
  }
}

room* room::getExitRoom(char* room) {
  map<const char*, room*>::iterator i;
  for(i = this->exits.begin(); i != this->exits.end(); ++i) {
    if(strcmp(i->first, room) == 0) {
      return i->second;
    }
  }
  return 0;
}

void room::getExitDirections() { //function prints all exit directions out of a room
  int count = 0;
  map<const char*, room*>::iterator i;
  for(i = this->exits.begin(); i != this->exits.end(); ++i) {
    if(count == 0) {
      cout << i->first; //prints an exit direction
      i++;
    }
    else {
      cout << ", " << i->first; //prints exits with a comma in between
    }
  }
}
