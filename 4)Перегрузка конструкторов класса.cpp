#include <iostream>
#include <string.h>
using namespace std;

class Bus{
private:
  int x,y;
public:
  Bus()
  {
    x=0;
    y=0;
  }

  Bus(int x,int y)
  {
    this->x=x;
    this->y=y;
  }

  void setter(int x,int y)
  {
    this->x=x;
    this->y=y;
  }

  void print()
  {
    cout<<x<<" "<<y;
  }
};

int main()
{
  Bus s(3,14);
  s.print();

  
  return 0;
}
