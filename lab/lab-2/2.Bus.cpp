#include <iostream>
#include <string.h>

using namespace std;

class Bus{
private:
  string fname;
  string fio,mark;
  string num_bus;
  int num_road,start_year;
  int probeg;
public:
  //getter
  string get_fio()
  {
    return fio;
  }

  string get_fname()
  {
    return fname;
  }

  string get_numbus()
  {
    return num_bus;
  }

  int get_numroad()
  {
    return num_road;
  }

  string get_mark()
  {
    return mark;
  }

  int get_startyear()
  {
    return start_year;
  }

  int get_probeg()
  {
    return probeg;
  }


  //setter
  void set_fio(string fio)
  {
    this->fio=fio;
  }

  void set_fname(string fname)
  {
    this->fname=fname;
  }

  void set_numbus(string num_bus)
  {
    this->num_bus=num_bus;
  }

  void set_numroad(int num_road)
  {
    this->num_road=num_road;
  }

  void set_mark(string mark)
  {
    this->mark=mark;
  }

  void set_startyear(int start_year)
  {
    this->start_year=start_year;
  }

  void set_probeg(int probeg)
  {
    this->probeg=probeg;
  }

  friend void show(Bus *s,int size);
  friend void ls_bus(Bus *s,int size,int number);
  friend void ls_more(Bus *s,int size);
  friend void ls_more_y(Bus *s,int size);

};

  void show(Bus *s,int size)
  {
    for(int j=0;j<size;j++)
    {
      cout<<s[j].fio<<" "<<s[j].fname<<" "<<s[j].num_bus<<" "<<s[j].num_road<<" "<<s[j].mark<<" "<<s[j].start_year<<" "<<s[j].probeg<<" ";
    }
  }

  void ls_bus(Bus *s,int size,int number)
  {
    for(int j=0;j<size;j++)
    {
      if(s[j].get_numroad()==number)
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
        if(s[j].get_startyear()<2008)
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
        if(s[j].get_probeg()>10000)
        {
        cout<<endl<<"+++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
        cout<<"list of bus more 10000km probeg :"<<s[j].num_bus;
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
  Bus *s;
  int n;
  cout<<"enter n:";
  cin>>n;
  s=new Bus[n];
  for(int j=0;j<n;j++)
  {
    cout<<"input surname:";
    cin>>fio;
    cout<<"input s.n: ";
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

    s[j].set_fio( fio);
    s[j].set_fname( fname);
    s[j].set_numbus( num_bus);
    s[j].set_numroad( num_road);
    s[j].set_mark( mark);
    s[j].set_startyear( start_year);
    s[j].set_probeg( probeg);
  }
  show(s,n);
  cout<<endl;
  int number;
  cout<<"Input number of road: ";cin>>number;
  ls_bus(s,n,number);
  ls_more(s,n);
  ls_more_y(s,n);
  return 0;
}
