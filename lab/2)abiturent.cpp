#include <iostream>
#include <string>

using namespace std;


class Abiturent{
private:
  string surname;
  string name;
  string fname;
  string adress;
  double gpa;
public:
  //setter()
  void set_surname(string surname)
  {
    this->surname=surname;
  }

  void set_name(string name)
  {
    this->name=name;
  }

  void set_fname(string fname)
  {
    this->fname=fname;
  }

  void set_adress(string adress)
  {
    this->adress=adress;
  }

  void set_gpa(double gpa)
  {
    this->gpa=gpa;
  }

  //getter()
  string get_surname()
  {
    return surname;
  }

  string get_name()
  {
    return name;
  }

  string get_fname()
  {
    return fname;
  }

  string get_adress()
  {
    return adress;
  }

  double get_gpa()
  {
    return gpa;
  }


  friend void show(Abiturent sv);

};

void show(Abiturent sv)
{
  cout<< sv.name <<" "<< sv.surname <<" "<< sv.fname <<" "<< sv.adress <<" "<< sv.gpa <<endl;
}



int main()
{
  Abiturent *s;
  int *ss;
  int n;
  cin>>n;
  ss=new int[n];
  s=new Abiturent[n];
  string name,surname,fname,adress;
  double gpa;
  for(int j=0;j<n;j++)
  {
    cin>> name >> surname >> fname >> adress >> gpa;
    s[j].set_name(name);
    s[j].set_surname(surname);
    s[j].set_fname(fname);
    s[j].set_adress(adress);
    s[j].set_gpa(gpa);
  }

  int max=s[0].get_gpa();


  for(int j=0;j<n;j++)
  {
    if(s[j].get_gpa()>max)
    {
      max=s[j].get_gpa();
    }
  }
  cout<<"---------------"<<endl;
  cout<<"record result is: "<<max<<endl;
  cout<<"---------------"<<endl;

  for(int j=0;j<n;j++)
  {
    if(s[j].get_gpa()<2)
    {
      cout<<"didn't pass: ";
      show(s[j]);
      cout<<"---------------"<<endl;
    }

    else if(s[j].get_gpa()>2)
    {
      cout<<"pass: ";
      show(s[j]);
      cout<<"---------------"<<endl;
    }
  }


  return 0;
}
