#include <iostream>
#include <stdlib.h>
using namespace std;

void install(int *arr,const int size)
{
  for(int j=0;j<size;j++)
  {
    arr[j]=rand()%10;
  }
}

void print(int *arr,const int size)
{
  for(int j=0;j<size;j++)
  {
    cout<<arr[j]<<" ";
  }
}

void insert(int *arr,const int size)
{
  int c=0;
  for(int j=1;j<size;j++)
  {
    int k=j;
    while(k > 0 && (arr[k-1]>arr[k]))
    {
      int tmp=arr[k];
      arr[k]=arr[k-1];
      arr[k-1]=tmp;
      k--;
      c++;
    }
  }
  cout<<"swaps in insert: "<<c<<endl;
}


void selected(int *arr,const int size)
{
  int c=0;
  for(int j=0;j<size;j++)
  {
    int tmp=arr[0];
    for(int i=j+1;i<size;i++)
    {
      if(arr[j]>arr[i])
      {
        c++;
        tmp=arr[j];
        arr[j]=arr[i];
        arr[i]=tmp;
      }
    }
  }
  cout<<"swaps in selected: "<<c<<endl;
}




void buble_sort(int *arr,const int size)
{
  int tmp;
  int c=0;
  for(int j=0;j<size-1;j++)
  {
    for(int i=0;i<size-j-1;i++)
    {
      if(arr[j]>arr[j+1])
      {
        tmp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=tmp;
        c++;
      }
    }
  }
  cout<<"swaps in buble_sort: "<<c<<endl;

}

int main()
{
  int *arr=new int[7];
  int *arr2=new int[7];
  int *arr3=new int[7];

  install(arr,7);
  install(arr2,7);
  install(arr3,7);
  buble_sort(arr,7);
  insert(arr2,7);
  selected(arr3,7);
  print(arr,7);
  cout<<endl;
  print(arr2,7);
  cout<<endl;
  print(arr3,7);

  delete[] arr;
  delete[] arr2;
  delete[] arr3;
  return 0;
}
