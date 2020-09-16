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



  friend void show(int n,Abiturent *ls);
  friend void ls_normal(int n,Abiturent *ls1);
  friend void ls_notpass(int n,Abiturent *ls2);
  friend void ls_n(int n,Abiturent *ls3);
  friend void max(int n,Abiturent *ls4);
};

void max(int n,Abiturent *ls4)
{
  double mx=ls4[0].get_gpa();
  for(int j=0;j<n;j++)
  {
    if(ls4[j].get_gpa()>mx)
    {
      mx=ls4[j].get_gpa();
    }
  }

  for(int j=0;j<n;j++)
  {
    if(ls4[j].get_gpa()==mx)
    {
      cout<<"---------------"<<endl;
      cout<<"max score: ";
      cout<< ls4[j].surname <<" "<< ls4[j].name <<" "<< ls4[j].fname <<" "<< ls4[j].adress <<" "<< ls4[j].gpa <<endl;
      cout<<"---------------"<<endl;
    }
  }

}

void show(int n,Abiturent *ls)
{
  cout<<"all list: "<<endl;

  for(int j=0;j<n;j++)
  {
    cout<<"---------------"<<endl;
    cout<< ls[j].surname <<" "<< ls[j].name <<" "<< ls[j].fname <<" "<< ls[j].adress <<" "<< ls[j].gpa <<endl;
    cout<<"---------------"<<endl;
  }
}

void ls_normal(int n,Abiturent *ls1)
{
  for(int j=0;j<n;j++)
  {
    if(ls1[j].get_gpa()>2)
    {
      cout<<"---------------"<<endl;
      cout<<"pass :";
      cout<< ls1[j].surname <<" "<< ls1[j].name <<" "<< ls1[j].fname <<" "<< ls1[j].adress <<" "<< ls1[j].gpa <<endl;
      cout<<"---------------"<<endl;

    }
  }
}

void ls_notpass(int n,Abiturent *ls2)
{
  for(int j=0;j<n;j++)
  {
  if(ls2[j].get_gpa()<2)
  {
   cout<<"---------------"<<endl;
   cout<<" didn't pass :";
    cout<< ls2[j].surname <<" "<< ls2[j].name <<" "<< ls2[j].fname <<" "<< ls2[j].adress <<" "<< ls2[j].gpa <<endl;
    cout<<"---------------"<<endl;

  }
  }
}

void ls_n(int n,Abiturent *ls3)
{
  for(int j=0;j<n;j++)
  {
    if(ls3[j].get_gpa()>=2 && ls3[j].get_gpa()<2.1)
    {
      cout<<"---------------"<<endl;
      cout<<" maybe pass :";
       cout<< ls3[j].surname <<" "<< ls3[j].name <<" "<< ls3[j].fname <<" "<< ls3[j].adress <<" "<< ls3[j].gpa <<endl;
       cout<<"---------------"<<endl;
    }
  }
}



int main()
{
  Abiturent *s;
  int n;
  cin>>n;
  s=new Abiturent[n];
  string name,surname,fname,adress;
  double gpa;

  for(int j=0;j<n;j++)
  {
    cin>> surname >> name >> fname >> adress >> gpa;
    s[j].set_name(name);
    s[j].set_surname(surname);
    s[j].set_fname(fname);
    s[j].set_adress(adress);
    s[j].set_gpa(gpa);
  }


  ls_notpass(n,s);
  ls_normal(n,s);
  max(n,s);
  ls_n(n,s);

  delete[] s;
  return 0;
}
