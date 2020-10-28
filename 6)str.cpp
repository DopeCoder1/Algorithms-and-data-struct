#include <iostream>
#include <string>
using namespace std;

class String{
private:
  char *str;
  int size;
public:
  String()
  {
    this->str=nullptr;
    this->size=0;
    cout<<"empty constructor calls"<<this<<endl;
  }

  String(const char* s)
  {
    this->size=0;
    while(*(s+size) !='\0')
    {
      size++;
    }
    this->str=new char[size+1];
    for(int j=0;j<size;j++)
    {
      this->str[j]=s[j];
    }
    this->str[size]='\0';
    cout<<"constructor calls"<<this<<endl;
  }

  String(const String &other)//copy constructor
  {
    this->size=other.size;
    this->str=new char[size+1];
    for(int j=0;j<other.size;j++)
    {
      this->str[j]=other.str[j];
    }
    this->str[other.size]='\0';
    cout<<"copy constructor calls"<<this<<endl;
  }

  String& operator = (const String &other)
  {
    delete[] this->str;
    this->size=other.size;
    this->str=new char[size+1];
    for(int j=0;j<other.size;j++)
    {
      this->str[j]=other.str[j];
    }
    this->str[other.size]='\0';
    return *this;
  }

  ~String()
  {
    delete[] this->str;
    cout<<endl<<"distructor calls"<<this<<endl;
  }

  int len()
  {
    return this->size;
  }

  char& operator [] (int idx)
  {
    return this->str[idx];
  }

  String operator + (const String &other)
  {
    String newstr;
    newstr.size=this->size+other.size;
    newstr.str=new char[newstr.size+1];
    for(int j=0;j<this->size;j++)
    {
      newstr.str[j]=this->str[j];
    }
    for(int j=this->size; j<newstr.size; j++)
    {
      newstr.str[j]=other.str[j-this->size];
    }
    newstr.str[newstr.size]='\0';
    return newstr;
  }
};


int main()
{
  String a("hello");
  String b("say");
  cout<<b.len()<<endl;
  cout<<a.len()<<endl;
  cout<<a[0]<<endl;
  a[0]='H';
  String c=a+b;
  for(int j=0;j<c.len();j++)
  {
    cout<<c[j]<<" ";
  }
  return 0;
}
