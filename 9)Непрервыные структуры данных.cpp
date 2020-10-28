#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
  //1)array
  int arr[6];

  for(int j=0;j<6;j++)
  {
    cout<<arr+j<<" ";
  }

  cout<<endl;
  //2)Vector -is Dynimal array
  int *vec=new int[5];
  for(int j=0;j<5;j++)
  {
    cout<<vec+j<<" ";
  }



  return 0;
}
