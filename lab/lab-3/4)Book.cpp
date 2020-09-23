#include <iostream>
#include <string>

using namespace std;


class Book{
private:
  string author;
  string name;
  string created;
  int year;
  int paper;

public:
  Book()
  {
    author=" ";
    name=" ";
    created=" ";
    year=0;
    paper=0;
  }

  Book(string author,string name,string created,int year,int paper)
  {
    this->author=author;
    this->name=name;
    this->created=created;
    this->year=year;
    this->paper=paper;
  }

  friend void ls_authorBook(int n,Book *ls,string auth);
  friend void ls_created(int n,Book *ls,string crea);
  friend void ls_newYear(int n,Book *ls,int year);

};

  void ls_authorBook(int n,Book *ls,string auth)
  {

    for(int j=0;j<n;j++)
    {
      if(ls[j].author==auth)
      {
      cout<<"---------------"<<endl;
      cout<<"author: ";
      cout<<ls[j].author<<endl;
      cout<<endl;
      cout<<"book: "<<ls[j].name<<endl;
      cout<<"---------------";
    }
    }
  }

  void ls_created(int n,Book *ls,string crea)
  {
    for(int j=0;j<n;j++)
    {
      if(ls[j].created==crea)
      {
      cout<<"---------------"<<endl;
      cout<<"created:";
      cout<<ls[j].created;
      cout<<endl;
      cout<<"book: "<<ls[j].name<<endl;
      cout<<"---------------";
    }
    }
  }

  void ls_newYear(int n,Book *ls,int year)
  {
    for(int j=0;j<n;j++)
    {
      if(ls[j].year>year)
      {
      cout<<"---------------"<<endl;
      cout<<"year:";
      cout<<ls[j].year;
      cout<<endl;
      cout<<"book: "<<ls[j].name<<endl;
      cout<<"---------------";
    }
  }
}

int main()
{
  Book *p;
  int n;
  cout<<"enter n: ";
  cin>>n;
  p=new Book[n];
  string author;
  string name;
  string created;
  int year;
  int paper;

  for(int j=0;j<n;j++)
  {
    cin>> author >> name >> created >> year >> paper;
    p[j]=Book(author,name,created,year,paper);
  }

  string auth,crea;
  int year2;

  cout<<"enter author: ";
  cin>>auth;
  cout<<"enter created: ";
  cin>>crea;
  cout<<"enter year: ";
  cin>>year2;


  ls_authorBook(n,p,auth);
  ls_created(n,p,crea);
  ls_newYear(n,p,year2);

  delete[] p;
  return 0;
}
