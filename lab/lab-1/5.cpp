#include <iostream>
#include <stdlib.h>
using namespace std;

void input(int *arr,int size)
{
  for(int j=0;j<size;j++)
  {
    arr[j]=rand()%10;
  }
}

void print(int *arr,int size)
{
  for(int j=0;j<size;j++)
  {
    cout<<arr[j]<<" ";
  }
}

void add_element(int *&arr,int &size,int value,int index)
{
  size++;
  int *new_arr=new int[size];
  new_arr[index]=value;
  for(int j=0;j<index;j++)
  {
    new_arr[j]=arr[j];
  }

  for(int j=index;j<size;j++)
  {
    new_arr[j+1]=arr[j];
  }
  delete[] arr;
  arr=new_arr;
}

int main()
{
  int n;
  cout<<"enter n: ";
  cin>>n;
  int value,index;
  int *arr=new int[n];
  input(arr,n);
  print(arr,n);
  cout<<endl;

  cout<<"Input value: ";
  cin>>value;
  cout<<"Input index: ";
  cin>>index;
  cout<<endl;
  add_element(arr,n,value,index);
  print(arr,n);

  return 0;
}
