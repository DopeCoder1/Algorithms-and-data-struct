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

//Algorithms by search()

//1)Linear search()
int line_search(int *arr,const int size,int value)//O(N);
{
  for(int j=0;j<size;j++)
  {
    if(arr[j]==value)
    {
      return j;
    }
  }
  return -1;
}


//2)Binary search() O(log(n))
//find-79
// 11  34 44 63  77 79 99
//  11 34 44 {63} 77 79 99
//

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
      return middle;
    }
    else if(arr[middle]<value)
    {
      left=middle+1;//*right(11  34 44)*  {63}  *left(77 79 99)*
    }
    else if(arr[middle]>value)
    {
      right=middle-1;
    }
  }
  return -1;
}

//Algorithms by sort() O(N^2)
void buble_sort(int *arr,const int size)
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

int main()
{
  int size;
  cin>>size;
  int *arr=new int[size];
  install(arr,size);
  print(arr,size);
  buble_sort(arr,size);
  cout<<binary_search(arr,size,69);
  delete[] arr;
  return 0;
}
