#include <iostream>
#include <stdlib.h>
#include <time.h>


int random_search(int x,int y)
{
  // srand(time(NULL));
  // int value=rand()%y+x;
  int value=2000;
  std::cout<<"random value is "<<value<<std::endl;
  int low=x;
  int hight=y;
  int middle;
  int c=0;
  while(low<=hight)
  {
    c++;
    middle=(low+hight)/2;
    if(middle==value)
    {
      return c;
    }
    else if(middle<value)
    {
      low=middle+1;
      c++;
    }
    else if(middle>value)
    {
      hight=middle-1;
    }
  }
  return -1;
}

int main()
{
  std::cout<<random_search(1,2000);
  return 0;
}
