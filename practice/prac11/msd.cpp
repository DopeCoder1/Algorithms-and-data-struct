#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int msd(int op1, int op2) {
    int n1 = 1, n2 = 1;
    int tmp1 = op1, tmp2 = op2;
    while((tmp1 /= 10) != 0){
      n1 *= 10;}
    while((tmp2 /= 10) != 0){
      n2 *= 10;}
    while (n1 > 0 && n2 > 0) {
        tmp1 = op1 / n1;
        tmp2 = op2 / n2;
        if (tmp1 > tmp2)
        {
            return 1;
        }
        if (tmp1 < tmp2)
        {
            return -1;
        }
        op1 -= tmp1 * n1;
        op2 -= tmp2 * n2;
        n1 /= 10;
        n2 /= 10;
    }
    if (n1 > n2)
    {
        return 1;
    }
    if (n2 > n1)
    {
        return -1;
    }
    return 0;
}

void print(int *arr,const int size)
{
  for(int j=0;j<size;j++)
  {
    cout<<arr[j]<<endl;
  }
}

int main()
{
  int arr[5]={1000,300,4,510,20};
  print(arr,5);
  cout<<"after sort: "<<endl;
  sort (arr,arr+5,msd);
  print(arr,5);
  return 0;
}
