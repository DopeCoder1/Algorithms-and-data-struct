#include <iostream>
#include <string.h>

using namespace std;

class MyArray{
private:
  int *arr;
  int n;
public:
  MyArray(int size)
  {
    this->n=size;
    this->arr=new int[size];
    for(int j=0;j<size;j++)
    {
      this->arr[j]=rand()%100;
    }
    cout<<"constructor calls\t"<<this<<endl;
  }

  MyArray(const MyArray &other)
  {
    this->n=other.n;
    this->arr=new int[other.n];
    for(int j=0;j<this->n;j++)
    {
      this->arr[j]=other.arr[j];
    }
    cout<<"copy constructor calls\t"<<this<<endl;
  }

  ~MyArray()
  {
    cout<<"distructor calls\t"<<this<<endl;
    delete[] this->arr;
  }

  MyArray &operator = (const MyArray &other)
  {
    this->n=other.n;
    delete[] this->arr;
    this->arr=new int[other.n];
    for(int j=0;j<this->n;j++)
    {
      this->arr[j]=other.arr[j];
    }
    cout<<"Reset operator calls\t"<<this<<endl;
    return *this;
  }

  bool &operator == (const MyArray &other)
  {
    this->n=other.n;
    this->arr=new int[other.n];
    for(int j=0;j<this->n;j++)
    {
      if(this->arr[j]==other.arr[j])
      {
        cout<<"yes";
      }

      else{
        cout<<"no";
      }
    }

  }

  void print()
  {
    for(int j=0;j<this->n;j++)
    {
      cout<<this->arr[j]<<" ";
      cout<<this->arr+j<<" ";
    }
    cout<<endl;
  }
};

int main()
{
  MyArray a(10);
  MyArray b(8);
  bool result=a==b;
  cout<<result<<endl;
return 0;
}
