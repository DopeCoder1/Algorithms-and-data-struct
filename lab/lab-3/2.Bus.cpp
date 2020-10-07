#include <iostream>
#include <string.h>

using namespace std;

class Bus{
private:
  int Size;
  string fname;
  string fio,mark;
  string num_bus;
  int num_road,start_year;
  int probeg;
public:
  int *data;
  Bus(){
    fname=" ";
    fio=" ";
    mark=" ";
    num_bus="";
    num_road=0;
    start_year=0;
    probeg=0;
  }
  Bus(string fname,string fio,string mark,string num_bus,int num_road,int start_year,int probeg,int size)
  {
    this->Size=size;
    this->data=new int[size];
    for(int j=0;j<size;j++)
    {
      data[j]=j;
    }
    this->fname=fname;
    this->fio=fio;
    this->mark=mark;
    this->num_bus=num_bus;
    this->num_road=num_road;
    this->start_year=start_year;
    this->probeg=probeg;
  }
  Bus(const Bus &other)
  {
    this->size=other.size;
    this->data=new int[other.size];
    for(int j=0;j<other.size;j++)
    {
      this->data[j]=other.data[j];
    }
  }

  friend void show(Bus *s,int size);
  friend void ls_bus(Bus *s,int size,int number);
  friend void ls_more(Bus *s,int size);
  friend void ls_more_y(Bus *s,int size);
  ~Bus(){
    delete[] data;
    deta=nullptr;
    cout<<"dis"<<this<<endl;
  }
};


  void show(Bus *s,int size)
  {
    for(int j=0;j<size;j++)
    {
      cout<<s[j].fio<<" "<<s[j].num_bus<<" "<<s[j].num_road<<" "<<s[j].mark<<" "<<s[j].start_year<<" "<<s[j].probeg<<" ";
    }
  }

  void ls_bus(Bus *s,int size,int number)
  {
    for(int j=0;j<size;j++)
    {
      if(s[j].num_road==number)
      {
        cout<<endl<<"--------------------------------------------------"<<endl;
        cout<<"list of bus for :"<<s[j].num_bus;
        cout<<":"<<s[j].num_road;
        cout<<endl<<"--------------------------------------------------"<<endl;
      }
      }
    }

    void ls_more(Bus *s,int size)
    {
      for(int j=0;j<size;j++)
      {
        if(s[j].start_year<2008)
        {
        cout<<endl<<"************************************************"<<endl;
        cout<<"list of bus more 10years :"<<s[j].num_bus;
        cout<<":"<<s[j].start_year;
        cout<<endl<<"************************************************"<<endl;
      }
      }
    }

    void ls_more_y(Bus *s,int size)
    {
      for(int j=0;j<size;j++)
      {
        if(s[j].probeg>10000)
        {
        cout<<endl<<"+++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
        cout<<"list of bus more 10years :"<<s[j].num_bus;
        cout<<":"<<s[j].probeg;
        cout<<endl<<"+++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
        }
      }
    }


int main()
{
  string fio,mark,fname;
  string num_bus;
  int num_road,start_year;
  int probeg;
  int n;
  cin>>n;
  Bus *s=new Bus[n];
  for(int j=0;j<n;j++)
  {
    cout<<"input fio and f.i.o:";
      cin>>fio;
      cout<<"input fname:";
      cin>>fname;
      cout<<"input number of bus:";
      cin>>num_bus;
      cout<<"input number of road:";
      cin>>num_road;
      cout<<"input  mark:";
      cin>>mark;
      cout<<"input start of year :";
      cin>>start_year;
      cout<<"input probeg :";
      cin>>probeg;
    s[j]=Bus(fname,fio,mark,num_bus,num_road,start_year, probeg);
  }

  int number_of_road;
  cout<<"enter number of road: ";cin>>number_of_road;
  ls_bus(s,n,number_of_road);
  ls_more(s,n);
  
  return 0;
}
