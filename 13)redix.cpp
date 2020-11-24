#include <iostream>
#include <queue>
#include <stdlib.h>

int max(int *arr,const int size)
{
  int mx=arr[0];
  int cnt=0;
  for(int j=0;j<size;j++)
  {
    if(arr[j]>mx)
    {
      mx=arr[j];
    }
  }

  while (mx>0) {
    mx=mx/10;
    cnt++;
  }
  return cnt;
}

void radix_lsd(int *arr,const int size)
{
  std::queue <int> bucket[10];
  int divisor = max(arr,size);
  int r=1;
  int k;
  while(divisor > 0)
  {
    k=0;
    for(int j=0;j<size;j++)
    {
      bucket[(arr[j]/r)%10].push(arr[j]);
    }

    for(int j=0;j<10;j++)
    {
      while (!bucket[j].empty())
      {
        arr[k] = bucket[j].front();
        bucket[j].pop();
        k++;
      }
    }

    r=r*10;
    divisor--;
  }
}

void print(int *arr,const int size)
{
  for(int j=0;j<size;j++)
  {
    std::cout<<arr[j]<<std::endl;
  }
}

int main()
{
  int arr[6] = {1000000,900,100,1002,204,50};

  sort(v.begin(),v.end(),compare);
  radix_lsd(arr,6);
  print(arr,6);
  return 0;
}
