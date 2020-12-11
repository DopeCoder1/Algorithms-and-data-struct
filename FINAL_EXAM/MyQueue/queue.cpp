#include <iostream>
#include <queue>

using namespace std;

int main()
{
  queue <int> q;
  q.push(30);//1-FIFO
  q.push(50);//2
  q.push(70);//3
  q.push(90);//4

  //methods
  cout<<"last: "<<q.back()<<endl;
  cout<<"first: "<<q.front()<<endl;
  cout<<"size: "<<q.size()<<endl;
  cout<<"empty: "<<q.empty()<<endl;

  //Output
  while(!q.empty())
  {
    cout<<q.front()<<endl;
    q.pop();
  }

  queue <int> number;
  number.push(10);
  number.push(20);
  number.push(30);
  number.pop();
  cout<<"last element: "<<number.back()<<endl;
  cout<<"first element: "<<number.front()<<endl;
  
  return 0;
}
