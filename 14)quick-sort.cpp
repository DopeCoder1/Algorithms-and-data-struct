#include <iostream>
#include <stdlib.h>
using namespace std;


void install(int *arr,const int size)
{
  for(int j=0; j<size; j++)
  {
    *(arr+j) = rand()%10;
  }
}


void print(int *arr,const int size)
{
  for(int j=0; j<size; j++)
  {
    cout<<*(arr+j)<<endl;
  }
}


void quick_sort(int *arr,const int size,int left,int right)
{
  if(left < right)
  {
    int pivot = (left+right)/2;
    int tmp;
    tmp = arr[left];
    arr[left] = arr[right];
    arr[right] = tmp;
    pivot = left;
  }
}


/*

 6 45 4 23 88 12 61
 l =0
 r =6
 p = 3

*/


int main()
{

  return 0;
}
