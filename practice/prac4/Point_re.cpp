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
  };

  //getter
  int get_x()
  {
    return x;
  }

  int get_y()
  {
    return y;
  }

  //setter
  void set_x(int x)
  {
    this->x=x;
  }

  void set_y(int y)
  {
    this->y=y;
  }

};

class Rec{
private:
  Point a,b,c,d;
public:
  friend double l(Point  a, Point b, Point c, Point d);

  float sv()
  {
    float s = 0;
      float x[4], y[4];
      for (int i = 0; i < 4; i++)
          x[i]=Point a(x,y,x,y);
          y[i]=Point()
      for (int i = 0; i < 4; i++) {
          if (i == 3)
              s += l(x[0], y[0], x[i], y[i]);
          else

              s += l(x[i], y[i], x[i + 1], y[i + 1]);
      }
      cout << s;

  }
};
  double l(Point  a, Point b, Point c, Point d)
  {
    return fabs(sqrt(pow((c - a), 2) + pow((d - b), 2)));
  }


int main()
{

  return 0;
}
