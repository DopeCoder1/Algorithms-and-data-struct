#include <iostream>
#include <list>
using namespace std;


class Pasport{
public:
  string surname,name,fname;
  int day,month,year,id;
  string gender,country;

  Pasport()
  {
    surname="";
    name="";
    fname="";
    day=0;
    month=0;
    year=0;
    gender="";
    id=0;
    country="";
  }

  Pasport(string surname,string name,string fname,int day,int month,int year,string gender,int id,string country)
  {
    this->surname=surname;
    this->name=name;
    this->fname=fname;
    this->day=day;
    this->month=month;
    this->year=year;
    this->gender=gender;
    this->id=id;
    this->country=country;
  }
};

class ForeignPassport:public Pasport{
public:
  int f_id;
  //visa
  string f_country;
  int  f_day,f_month,f_year;

  ForeignPassport():Pasport()
  {
    f_id=0;
    f_country="";
    f_day=0;
    f_month=0;
    f_year=0;
  }

  ForeignPassport(string surname,string name,string fname,int day,int month,int year,string gender,int id,string country,int f_id,string f_country,int f_day,int f_month,int f_year):Pasport(surname,name,fname,day,month,year,gender,id,country)
  {
    this->f_id=f_id;
    this->f_country=f_country;
    this->f_day=f_day;
    this->f_month=f_month;
    this->f_year=f_year;
  }

  friend ostream& operator<<(ostream& os, const ForeignPassport& v);
};

ostream& operator<<(ostream& os, const ForeignPassport& v)
{
  os<<"\n"<<"Passport: "<<"\n"<<"Fio: "<<v.surname<<" "<<v.name<<" "<<v.fname<<"\n"<<"date: "<<v.day<<"/"<<v.month<<"/"<<v.year<<"\n"<<"id: "<<v.id<<"\n"<<"gender: "<<v.gender<<"\n";
  os<<"born in:"<<v.country<<"\n";
  os<<"\n"<<"ForeignPassport: "<<"\n"<<"Visa: "<<"\n"<<"Country: "<<v.f_country<<"\n"<<"date: "<<v.day<<"/"<<v.month<<"/"<<v.f_year<<"\n"<<"ForeignPassport id:"<<v.f_id<<"\n";
  return os;
}


bool compare(const ForeignPassport& v,const ForeignPassport& v2)
{
  return v.year > v2.year;
}

bool compare2(const ForeignPassport& v)
{
  return v.country != "UA";
}

void print(list<ForeignPassport> &v,list<ForeignPassport>::iterator &it)
{
  for (it = v.begin(); it != v.end(); ++it)
      cout <<" "<<*it;
}

void filter(list<ForeignPassport> &v)
{
  v.remove_if(compare2);
}

void sorts(list<ForeignPassport> &v)
{
  v.sort(compare);
}

int main()
{
    // list declaration of integer type
    list<ForeignPassport> mylist;
    list<ForeignPassport>::iterator it;
    mylist.push_back(ForeignPassport("Ailmbayev","Dias","Teltayulu",15,1,2002,"M",228,"KZ",667,"Kazakhstan",30,9,2021));
    mylist.push_back(ForeignPassport("Ailmbayev","Diaz","Teltayulu",15,1,2001,"M",228,"UA",667,"Ukraine",30,9,2021));

    sorts(mylist);
    cout<<endl<<"------------------- after sort ------------"<<endl;
    print(mylist,it);
    filter(mylist);
    cout<<endl<<"------------------- after filter ------------"<<endl;
    print(mylist,it);

    return 0;
}
