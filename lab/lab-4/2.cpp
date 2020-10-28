#include <iostream>

using namespace std;

class Square{
  double s;
public:
  Square(double var):s(var){}
};

class Circle{
  double r;
public:
  Circle(double var2):r(var2){}
  double get_r()
  {
    return r;
  }
};

class CircleSquare:public Circle,public Square{
public:
    CircleSquare(double var3):Square(var3*2),Circle(var3){}
};

int main()
{
  double s=10;
  double r=30;
  Square ms(s);
  CircleSquare msq(r);
  cout<<msq.get_r()<<endl;

  return 0;
}
