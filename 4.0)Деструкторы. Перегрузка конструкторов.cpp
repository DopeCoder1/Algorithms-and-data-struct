#include <iostream>
#include <string.h>

using namespace std;

class Point{
private:
  int x,y;
public:
  Point()
  {
    x=0;
    y=0;
  }

  Point(int x,int y)
  {
    this->x=x;
    this->y=y;
    cout<<"constructor calls\t"<<this<<endl;
  }

  ~Point(){
    cout<<"distructor calls\t"<<this<<endl;
  }

  void setx(int x)
  {
    this->x=x;
  }
  void sety(int y)
  {
    this->y=y;
  }

  int getx()
  {
    return x;
  }
  int gety()
  {
    return y;
  }
};


int main()
{
  Point a(2,3);
  Point b(a);

  cout<<a.gety()<<endl;
  cout<<b.gety()<<endl;
  a.sety(20);
  b.sety(10);
  cout<<a.gety()<<endl;
  cout<<b.gety()<<endl;

  return 0;
}
