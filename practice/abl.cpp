#include <iostream>
#include <stdlib.h>


void install(int size,int *arr){
  for(int j=0;j<size;j++)
  {
    arr[j]=rand()%10;
  }
}

void print(int size,int *arr)
{
  for(int j=0;j<size;j++)
  {
    std::cout<<arr[j]<<" ";
  }
  std::cout<<std::endl;
}


void pop_front(int *arr,const int size)
{
  for(int j=0;j<1;j++)
  {
    std::cout<<arr[j]<<std::endl;
  }
}

void pop_back(int *arr,const int size)
{
  for(int j=size-1;j<size;j++)
  {
    std::cout<<arr[j]<<std::endl;
  }
}

int main()
{
  int n;
  std::cin>>n;
  int *array=new int[n];
  install(n,array);
  print(n,array);
  pop_front(array,n);
  pop_back(array,n);
  return 0;

}
