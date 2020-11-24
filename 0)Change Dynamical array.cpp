#include <iostream>
#include <stdlib.h>
using namespace std;

void input_arr(int size,int *arr){
  for(int j=0;j<size;j++)
  {
    arr[j]=rand()%10;
  }

}

void print_arr(int size,int *arr)
{
  for(int j=0;j<size;j++)
  {
    cout<<arr[j]<<" ";
  }
  cout<<endl;
}


void push_back(int &size,int *&arr,int value)
{
  size++;
  int *new_arr=new int[size];
  for(int j = 0; j<size - 1 ;j++)
  {
    new_arr[j] = arr[j];
  }
  new_arr[size-1] = value;
  delete[] arr;
  arr=new_arr;

}


void pop_back(int &size,int *&arr)
{
  size--;
  int *new_arr=new int[size];
  for(int j=0;j<size;j++)
  {
    new_arr[j]=arr[j];
  }
  delete[] arr;
  arr=new_arr;
}

void push_front(int &size,int *&arr,int value)
{
  size++;
  int *new_arr=new int[size];
  new_arr[0]=value;
  for(int j=1;j<size;j++)
  {
    new_arr[j]=arr[j-1];
  }
  delete[] arr;
  arr=new_arr;
}

void pop_front(int &size,int *&arr)
{
  size--;
  int *new_arr=new int[size];
  for(int j=1;j<size+1;j++)
  {
    new_arr[j-1]=arr[j];
  }
  arr=new_arr;
}

int main()
{
  int n;
  cin>>n;
  int *arr=new int[n];
  input_arr(n,arr);
  print_arr(n,arr);
  pop_front(n,arr);
  cout<<endl;
  print_arr(n,arr);

  return 0;
}
