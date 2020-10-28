#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void install(int *arr,const int size,int *arr2,const int size2)
{
  srand(time(NULL));
  for(int j=0;j<size;j++)
  {
    arr[j]=rand()%10;
  }

  for(int j=0;j<size2;j++)
  {
    arr2[j]=rand()%10;
  }
}

void print(int *arr,const int size,int *arr2,const int size2)
{
  for(int j=0;j<size;j++)
  {
    cout<<arr[j]<<" ";
  }
  cout<<endl;
  for(int j=0;j<size2;j++)
  {
    cout<<arr2[j]<<" ";
  }
}


void sort(int *arr,const int size)
{
  int tmp;
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

int linear_search(int arr[],const int size,int value)
{
  for(int j=0;j<size;j++)
  {
    if(arr[j]==value)
    {
      return 1;
    }
  }
  return -1;
}

int binary_search(int arr[],const int size,int value)
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


int set(int arr[],const int size,int arr2[],const int size2)//binary_search
{
  int c=0;
  for(int j=0;j<size2;j++)
  {
    if(binary_search(arr,size,arr2[j])==1)
    {
      c++;
    }
  }

  cout<<endl<<"set: ";
  return c;
}

int set2(int arr[],const int size,int arr2[],const int size2)//linear_search
{
  int c=0;
  for(int j=0;j<size2;j++)
  {
    if(linear_search(arr,size,arr2[j])==1)
    {
      c++;
    }
  }
  cout<<endl<<"set2: ";
  return c;
}

int main() {
  int n,m;
  cout<<"n: ";
  cin>>n;
  cout<<"m: ";
  cin>>m;
  int *arr=new int[n];
  int *arr2=new int[m];

  install(arr,n,arr2,m);
  print(arr,n,arr2,m);
  cout<<endl;
  sort(arr,n);
  print(arr,n,arr2,m);

  cout<<set(arr,n,arr2,m);


  delete[] arr;
  delete[] arr2;
  return 0;
}
