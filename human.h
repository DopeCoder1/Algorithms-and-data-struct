#ifndef HUMAN_H_INCLUDED
#define HUMAN_H_INCLUDED

using namespace std;

#include <string.h>
#include <sstream>

class Human{
public:
  Human(string last_name,string name,string full_name)
  {
  this->last_name=last_name;
  this->name=name;
  this->full_name=full_name;
  }
private:
  string last_name,name,full_name;
};
