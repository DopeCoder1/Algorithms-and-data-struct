#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

void install(vector<int> &v,const int size)
{
  for(int j=0;j<size;j++)
  {
    v.push_back(rand()%10);
  }
}

void print(vector<int> &v)
{
  for(int j=0;j<v.size();j++)
  {
    cout<<v.at(j)<<" ";
  }
  cout<<endl;
}

void addElement(vector<int> &v,const int id,const int value)
{
  vector<int>::iterator it;
  it=v.begin()+id;
  v.insert(it,value);
}

void remove(vector<int> &v,const int value)
{
  vector<int>::iterator it;
  it=v.begin();
  for(int j=0;j<v.size();j++)
  {
    if(v[j]==value)
    {
      it=it+j;
      break;
    }
  }
  v.erase(it);
}

int main()
{
  vector<int> v;
  install(v,6);
  print(v);
  addElement(v,1,399);
  print(v);
  remove(v,4);
  print(v);
  return 0;
}
