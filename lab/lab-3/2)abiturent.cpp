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
  Abiturent()
  {
    surname="none";
    name="none";
    fname="none";
    adress="none";
    gpa=0;
  }

  Abiturent(string surname,string name,string fname,string adress,double gpa)
  {
    this->surname=surname;
    this->name=name;
    this->fname=fname;
    this->adress=adress;
    this->gpa=gpa;
  }

  friend void show(int n,Abiturent *ls);
  friend void ls_normal(int n,Abiturent *ls,double gpa);
  friend void ls_notpass(int n,Abiturent *ls,double gpa);
  friend void ls_n(int n,Abiturent *ls,double gpa);
  friend void max(int n,Abiturent *ls);
};

void max(int n,Abiturent *ls)
{
  double mx=ls[0].gpa;
  for(int j=0;j<n;j++)
  {
    if(ls[j].gpa>mx)
    {
      mx=ls[j].gpa;
    }
  }

  for(int j=0;j<n;j++)
  {
    if(ls[j].gpa==mx)
    {
      cout<<"mmmmmmmmmmmmmmmmmmmmmmmm"<<endl;
      cout<<"max score: ";
      cout<< ls[j].surname <<" "<< ls[j].name <<" "<< ls[j].fname <<" "<< ls[j].adress <<" "<< ls[j].gpa <<endl;
      cout<<"mmmmmmmmmmmmmmmmmmmmmmmm"<<endl;

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

void ls_normal(int n,Abiturent *ls,double gpa)
{
  for(int j=0;j<n;j++)
  {
    if(ls[j].gpa>=gpa)
    {
      cout<<"****************"<<endl;
      cout<<"pass :";
      cout<< ls[j].surname <<" "<< ls[j].name <<" "<< ls[j].fname <<" "<< ls[j].adress <<" "<< ls[j].gpa <<endl;
      cout<<"****************"<<endl;

    }
  }
}

void ls_notpass(int n,Abiturent *ls,double gpa)
{
  for(int j=0;j<n;j++)
  {
  if(ls[j].gpa<gpa-0.1)
  {
   cout<<"+++++++++++++++++++"<<endl;
   cout<<" didn't pass :";
    cout<< ls[j].surname <<" "<< ls[j].name <<" "<< ls[j].fname <<" "<< ls[j].adress <<" "<< ls[j].gpa <<endl;
    cout<<"+++++++++++++++++++"<<endl;

  }
}

}

void ls_n(int n,Abiturent *ls,double gpa)
{
  for(int j=0;j<n;j++)
  {
    if(ls[j].gpa>=gpa-0,1 && ls[j].gpa<2.1)
    {
      cout<<"xxxxxxxxxxxxxxxxxxxxxx"<<endl;
      cout<<" maybe pass :";
       cout<< ls[j].surname <<" "<< ls[j].name <<" "<< ls[j].fname <<" "<< ls[j].adress <<" "<< ls[j].gpa <<endl;
       cout<<"xxxxxxxxxxxxxxxxxxxxxx"<<endl;

    }
  }
}



int main()
{
  Abiturent *s;
  int n;
  cout<<"enter n: ";
  cin>>n;
  s=new Abiturent[n];
  string name,surname,fname,adress;
  double gpa;
  for(int j=0;j<n;j++)
  {
    cin>> surname >> name >> fname >>adress >>gpa;
    s[j]=Abiturent(surname,name,fname,adress,gpa);
  }
  cout<<endl;
  double new_gpa;
  cout<<"enter gpa for students: ";
  cin>>new_gpa;

  ls_notpass(n,s,new_gpa);
  ls_normal(n,s,new_gpa);
  max(n,s);
  ls_n(n,s,new_gpa);

  delete[] s;
  return 0;
}
