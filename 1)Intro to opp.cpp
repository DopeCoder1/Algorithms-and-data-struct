#include <iostream>
#include <string>

using namespace std;

class Print;

class Student{
private://Приватная только для класса!
  string name;
  string surname;
  int age;
  int gpa;

public://Внешняя func()
  friend Print;
  //getter
  void gets() const
  {
    cout<<name<<" "<<surname<<" "<<age<<" "<<gpa<<endl;
  }

  void sets(string name_,string surname_,int age_,int gpa_)
  {
    name=name_;
    surname=surname_;
    age=age_;
    gpa=gpa_;

  }
};

class Print{
public:
  void printStudent(Student s)
  {
  cout<<s.name<<" ";
  }
};

int main()
{
  Print p;
  Student s;
  s.sets("dias","alimbayev",18,2);
  p.printStudent(s);

  return 0;
}
