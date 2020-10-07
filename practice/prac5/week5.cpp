ы#include <iostream>
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
  }

  void set_arr()
  {
    int value;
    for(int j=0;j<this->n;j++)
    {
      cout<<"enter elements:";
      cin>>value;
      this->arr[j]=value;
    }
  }

  MyArray(const MyArray &other)
  {
    this->n=other.n;
    delete[] this->arr;
    this->arr=new int[other.n];
    for(int j=0;j<this->n;j++)
    {
    this->arr[j]=other.arr[j];
    }
  }

  ~MyArray()
  {
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
    cout<<"Peregruzka operator calls\t"<<this<<endl;
    return *this;
  }

  bool operator == (const MyArray &other)
  {
    if(this->n != other.n)
    {
      return 0;
    }
    else{
      for(int j=0;j<this->n;j++)
      {
        if(this->arr[j] != other.arr[j])
        {
          return 0;
        }
      }
    }
    return 1;
  }

  bool operator != (const MyArray &other)
  {
    if(this->n != other.n)
    {
      return 1;
    }
    else{
      for(int j=0;j<this->n;j++)
      {
        if(this->arr[j] != other.arr[j])
        {
          return 1;
        }
      }
    }
    return 0;
  }

  void print()
  {
    for(int j=0;j<this->n;j++)
    {
      cout<<arr[j]<<" :";
      cout<<arr+j<<" \t"<<endl;
    }
  }
};

int main() {
  int x,y;
  cout<<"enter N:";cin>>x;
  MyArray a(x);
  a.set_arr();
  a.print();
  cout<<endl;

  cout<<"enter n:";cin>>y;
  MyArray b(y);
  b.set_arr();
  b.print();
  cout<<endl;


  bool lg=a==b;
  cout<<"(==) :"<<lg<<endl;

  bool lg2=a!=b;
  cout<<"(!=) :"<<lg2<<endl;

  return 0;
}
