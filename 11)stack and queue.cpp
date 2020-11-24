#include <iostream>
#include <stack>

using namespace std;



int main()
{
  //stack [ start only in last -> -6)0   5)0   4)0   3)0   2)0   1)0]
  //[ -6)0  5)-0  4)+0  0  0  0  ]

  stack <int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.emplace(40);
  s.pop();

  //output in stack
  // we can not ouput in stack
  //but we can see elements only in top
  cout<<s.top()<<endl;
  s.pop();
  cout<<s.top()<<endl;
  s.pop();
  cout<<s.top()<<endl;
  s.pop();
  cout<<s.top()<<endl;
  cout<<"size is "<<s.size()<<endl;

  //queue
  
  return 0;
}
