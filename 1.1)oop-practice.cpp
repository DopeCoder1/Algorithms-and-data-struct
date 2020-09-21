#include <iostream>
#include <string.h>
using namespace std;

class Person{
public:
  string name;
};


int main()
{
  Person p;
  p.name="dias";
  cout<<p.name;
  return 0;
}
