#include <iostream>
#include <string.h>

using namespace std;


class MyClass{
private:
  int size_r;
public:
  int *data;
  MyClass(int size)
  {
    this->size_r=size;
    this->data=new int[size];
    for(int j=0;j<size;j++)
    {
      data[j]=j;
    }

    cout<<"call constructor with parametrs "<<this<<endl;
  }

  MyClass(const MyClass &other)
  {   this->size_r=other.size_r;
      this->data=new int[other.size_r];
      for(int j=0;j<other.size_r;j++)
      {
        this->data[j]=other.data[j];
      }
      cout<<"call copy construktor"<<this<<endl;
  }

  ~MyClass()
  {
    cout<<"call distrcuctor "<<this<<endl;
    delete[] data;
  }
};

void  foo(MyClass value)
{
  cout<<"call foo func"<<endl;
}


int main(void)
{
  MyClass a(10);
  MyClass b(a);

  return 0;
}
