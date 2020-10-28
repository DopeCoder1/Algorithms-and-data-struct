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


void removeElement(int *&arr,int &size,int index)
{
  int *new_arr=new int[size-1];
  for(int j=0;j<size;j++)
  {
    if(j>=index)
    {
      new_arr[j]=arr[j+1];
    }
    else{
      new_arr[j]=arr[j];
    }
  }
  size--;
  delete[] arr;
  arr=new_arr;
}


int main()
{
  int n;
  cout<<"input n: ";
  cin>>n;
  int index;
  int *arr=new int[n];
  input(arr,n);
  print(arr,n);

  cout<<endl;
  cout<<"Input index: ";
  cin>>index;
  cout<<endl;
  removeElement(arr,n,index);
  print(arr,n);

  return 0;
}
