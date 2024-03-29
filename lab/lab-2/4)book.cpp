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
  //setter()
  void set_author(string author)
  {
    this->author=author;
  }

  void set_name(string name)
  {
    this->name=name;
  }

  void set_created(string created)
  {
    this->created=created;
  }

  void set_year(int year)
  {
    this->year=year;
  }

  void set_paper(int paper)
  {
    this->paper=paper;
  }

  //getter()
  string get_author()
  {
    return author;
  }

  string get_name()
  {
    return name;
  }

  string get_created()
  {
    return created;
  }

  int get_year()
  {
    return year;
  }

  int get_paper()
  {
    return paper;
  }


  friend void ls_authorBook(int n,Book *ls,string auth);
  friend void ls_created(int n,Book *ls,string crea);
  friend void ls_newYear(int n,Book *ls,int year);

};

  void ls_authorBook(int n,Book *ls,string auth)
  {

    for(int j=0;j<n;j++)
    {
      if(ls[j].get_author()==auth)
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
      if(ls[j].get_created()==crea)
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
      if(ls[j].get_year()>year)
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
    p[j].set_author(author);
    p[j].set_name(name);
    p[j].set_created(created);
    p[j].set_year(year);
    p[j].set_paper(paper);
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
