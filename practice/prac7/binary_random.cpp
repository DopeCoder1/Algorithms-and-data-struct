#include <iostream>
#include <stdlib.h>
#include <time.h>




int linear_search(int x,int y)
{
  srand(time(NULL));
  int value=rand()%10+1;
  std::cout<<"random value is "<<value<<std::endl;
  int c=0;
  for(int j=x;j<y;j++)
  {
    c++;
    if(j==value)
    {
      std::cout<<"operation in linear_search: "<<c<<std::endl;
      return value;
    }
  }
    return -1;
}

int random_search(int x,int y)
{
  srand(time(NULL));
  int value=rand()%y+x;

  std::cout<<"random value is "<<value<<std::endl;
  int low=x;
  int hight=y;
  int middle;
  int c=0;
  while(low<=hight)
  {
    c++;
    middle=(low+hight)/2;
    if(middle==value)
    {
       std::cout<<"operation in linear_search: "<<c<<std::endl;
      return middle;
    }
    else if(middle<value)
    {
      low=middle+1;
      c++;
    }
    else if(middle>value)
    {
      hight=middle-1;
    }
  }
  return -1;
}

//2
void sort(int *arr,const int size)
{
  for(int j=0;j<size;j++)
  {
    int tmp=arr[0];
    for(int i=j+1;i<size;i++)
    {
      if(arr[j]>arr[i])
      {
        tmp=arr[j];
        arr[j]=arr[i];
        arr[i]=tmp;
      }
    }
  }
}



void install(int *arr,const int n,int *arr2,const int m)
{
  srand(time(NULL));
  for(int j=0;j<n;j++)
  {
    arr[j]=rand()%20;
  }

  for(int j=0;j<m;j++)
  {
    arr2[j]=rand()%20;
  }
}


void print(int *arr,const int n,int *arr2,const int m)
{
  for(int j=0;j<n;j++)
  {
    std::cout<<arr[j]<<" ";
  }
  std::cout<<"\n";
  for(int j=0;j<m;j++)
  {
    std::cout<<arr2[j]<<" ";
  }
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

void set2(int *arr,int n,int *arr2,int m)
{
    int c=0;
    for(int j=0;j<m;j++)
    {
      if((binary_search(arr,m,arr2[j]))==1)
      {
        c++;
      }
    }
  std::cout<<"sets: "<<c<<std::endl;
}

int main()
{
  int *arr=new int[2];
  int *arr2=new int[4];

  install(arr,2,arr2,4);
  print(arr,2,arr2,4);
  std::cout<<std::endl;
  sort(arr,2);
  std::cout<<std::endl;

  print(arr,2,arr2,4);
  std::cout<<std::endl;
  set2(arr,2,arr2,4);

  delete[] arr;
  delete[] arr2;
  return 0;
}
