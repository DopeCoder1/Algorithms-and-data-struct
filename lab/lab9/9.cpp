#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
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


  void print(){
    cout<<endl<<"Passport: "<<endl<<"Fio: "<<surname<<" "<<name<<" "<<fname<<endl<<"date: "<<day<<"/"<<month<<"/"<<year<<endl<<"id: "<<id<<endl<<"gender: "<<gender<<endl;
    cout<<"born in:"<<country<<endl;
    cout<<endl<<"ForeignPassport: "<<endl<<"Visa: "<<endl<<"Country: "<<f_country<<endl<<"date: "<<day<<"/"<<month<<"/"<<f_year<<endl<<"ForeignPassport id:"<<f_id<<endl;
  }
};

void sorts(vector<ForeignPassport> &v)
{
  cout<<endl<<"after sort"<<endl;
  sort(v.begin(),v.end(),[](const ForeignPassport &var,const ForeignPassport &var2)
  {
    return var.year < var2.year;
  });
}

void filter(vector<ForeignPassport> &v)
{
  cout<<endl<<"after filter"<<endl;
  auto ls=remove_if(v.begin(),v.end(),[](const ForeignPassport &var)
  {
    return var.country != "KZ";
  });
  v.erase(ls,v.end());
}

void printf(vector<ForeignPassport> &v)
{
  for(int j=0;j<v.size();j++)
  {
    v[j].print();
  }
  cout<<"\n";
}

// bool compare_nocase (const string& first, const string& second)
// {
//   unsigned int i=0;
//   while ( (i<first.length()) && (i<second.length()) )
//   {
//     if (tolower(first[i])<tolower(second[i])) return true;
//     else if (tolower(first[i])>tolower(second[i])) return false;
//     ++i;
//   }
//   return ( first.length() < second.length() );
// }
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


  void print(){
    cout<<endl<<"Passport: "<<endl<<"Fio: "<<surname<<" "<<name<<" "<<fname<<endl<<"date: "<<day<<"/"<<month<<"/"<<year<<endl<<"id: "<<id<<endl<<"gender: "<<gender<<endl;
    cout<<"born in:"<<country<<endl;
    cout<<endl<<"ForeignPassport: "<<endl<<"Visa: "<<endl<<"Country: "<<f_country<<endl<<"date: "<<day<<"/"<<month<<"/"<<f_year<<endl<<"ForeignPassport id:"<<f_id<<endl;
  }
};

int main()
{
  list<ForeignPassport> v;
  list<ForeignPassport>::iterator it;
  v.push_back(ForeignPassport("Ailmbayev","Dias","Teltayulu",15,1,2002,"M",228,"KZ",667,"Kazakhstan",30,9,2021));
  v.push_back(ForeignPassport("Vladmimir","Putin","Vladmimirovich",7,9,1952,"M",330,"RU",667,"Russian",30,9,2021));
  v.sort();
  cout << "mylist contains:";
  for (it=v.begin(); it!=v.end(); ++it)
  {
   cout<<""<< *it;
 }
  cout<<"\n";

  return 0;
}
