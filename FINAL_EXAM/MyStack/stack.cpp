#include <iostream>
#include <string>
#include <stack> //last in first out

using namespace std;
int main()
{
  stack <int> s;
  s.push(30);//1
  s.push(50);//2
  s.push(70);//3--LIFO

  cout<<"last element: "<<s.top()<<endl;
  //methods
  cout<<"last: "<<s.top()<<endl;
  cout<<"size: "<<s.size()<<endl;
  cout<<"empty: "<<s.empty()<<endl;


  //Output all data
  while(! s.empty())
  {
    cout<<s.top()<<endl;
    s.pop();
  }

  return 0;
}
