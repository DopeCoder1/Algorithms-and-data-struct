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


int main()
{
  int n;
  cout<<"n: ";
  int value;
  cin>>n;
  cout<<"value: ";
  cin>>value;
  int *arr=new int[n];
  input_arr(n,arr);
  print_arr(n,arr);
  push_back(n,arr,value);
  cout<<endl;
  print_arr(n,arr);

  return 0;
}
