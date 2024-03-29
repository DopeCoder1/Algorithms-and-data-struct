#include <iostream>
#include <string.h>

using namespace std;

class Pasport{
protected:
  string surname,name,fname;
  int day,month,year,id;
  string gender;
public:
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
  }

  Pasport(string surname,string name,string fname,int day,int month,int year,string gender,int id)
  {
    this->surname=surname;
    this->name=name;
    this->fname=fname;
    this->day=day;
    this->month=month;
    this->year=year;
    this->gender=gender;
    this->id=id;
  }
};

class ForeignPassport:public Pasport{
private:
  int f_id;
  //visa
  string f_country;
  int  f_day,f_month,f_year;
public:
  ForeignPassport():Pasport()
  {
    f_id=0;
    f_country="";
    f_day=0;
    f_month=0;
    f_year=0;
  }

  ForeignPassport(string surname,string name,string fname,int day,int month,int year,string gender,int id,int f_id,string f_country,int f_day,int f_month,int f_year):Pasport(surname,name,fname,day,month,year,gender,id)
  {
    this->f_id=f_id;
    this->f_country=f_country;
    this->f_day=f_day;
    this->f_month=f_month;
    this->f_year=f_year;
  }


  void print(){
    cout<<"Passport: "<<endl<<"Fio: "<<surname<<" "<<name<<" "<<fname<<endl<<"date: "<<day<<"/"<<month<<"/"<<year<<endl<<"id: "<<id<<endl<<"gender: "<<gender<<endl;
    cout<<endl;
    cout<<"ForeignPassport: "<<endl<<"Visa: "<<endl<<"Country: "<<f_country<<endl<<"date: "<<day<<"/"<<month<<"/"<<f_year<<endl<<"ForeignPassport id:"<<f_id;
  }
};

int main()
{
  ForeignPassport p("Ailmbayev","Dias","Teltayulu",15,1,2002,"M",228,667,"Kazakhstan",30,9,2021);
  p.print();

  return 0;
}
