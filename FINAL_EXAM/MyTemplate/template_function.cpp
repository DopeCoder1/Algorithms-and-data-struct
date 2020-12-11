#include <iostream>

using namespace std;

template <typename T,typename T2>
T2 Sum(T a,T2 b)
{
  return a+b;
}


template <typename T,typename T2>
void Empty(T a,T2 b)
{
  cout<<a<<endl;
  cout<<b<<endl;
}


int main()
{
  cout<<Sum(3,5.1)<<endl;
  Empty(30,40);
  return 0;
}
