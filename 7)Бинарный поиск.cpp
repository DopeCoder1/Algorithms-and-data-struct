#include <iostream>
#include <stdlib.h>
using namespace std;

void install(int *arr,const int size)
{
  for(int j=0;j<size;j++)
  {
    arr[j]=rand()%100;
  }
}

void print(int *arr,const int size)
{
  for(int j=0;j<size;j++)
  {
    cout<<arr[j]<<" ";
  }
  cout<<endl;
}

void sort(int *arr,const int size)
{
  int tmp=0;
  for(int j=0;j<size-1;j++)
  {
    for(int i=0;i<size-j-1;i++)
    {
      if(arr[i]>arr[i+1])
      {
        tmp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=tmp;
      }
    }
  }
}


int binary_search(int *arr,const int size,int value)
{
  int left=0;
  int right=size-1;
  int middle;
  while(left<=right)
  {
    middle=(left+right)/2;
    if(arr[middle]==value)
    {
      return 1;
    }
    else if(arr[middle]<value)
    {
      left=middle+1;
    }
    else if(arr[middle]>value)
    {
      right=middle-1;
    }
  }
  return -1;
}
int main()
{
  int n;
  cin>>n;
  int *arr=new int[n];
  install(arr,n);
  print(arr,n);
  sort(arr,n);
  print(arr,n);
  cout<<"num :"<<binary_search(arr,n,0)<<endl;
  delete[] arr;
  return 0;
}
