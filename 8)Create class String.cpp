#include <iostream>

using namespace std;

class string
{
private:
  char *str;
  int size;
public:
  string()
  {
    this->str=nullptr;
    this->size=0;
    cout<<"default constructor calls"<<this<<endl;
  }

  string(const char *str)
  {
    this->size=0;
    while(*(str+size) != '\0')
    {
      size++;
    }
    this->str=new char[size+1];
    for(int j=0;j<size;j++)
    {
      this->str[j]=str[j];
    }
    this->str[size]='\0';
    cout<<"constructor calls"<<this<<endl;
  }

};

int main()
{
  return 0;
}
