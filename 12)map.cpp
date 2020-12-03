#include <map>
#include <iostream>
#include <string>
using namespace std;
int main()
{

  //Словарь

  //Пары
  cout<<"Pair:"<<endl;
  pair <string,int> p("apple",700);
  cout<<p.first<<endl;//ключ
  cout<<p.second<<endl;//значения
  cout<<"Map: "<<endl;

  //dict
  map <string,int> db;

  //Добавляем эдменты в словарь 3-метода
  //1)
  db.insert(pair <string,int>("Orange",300));

  //2)
  db.insert(make_pair("Apple",250));

  //3)
  db.emplace("Banana",200);
  db.emplace("PineApple",400);


  //вывод данных
  for(map <string,int>::iterator it=db.begin(); it!= db.end(); it++)
  {
    cout<<it->first<<" "<<it->second<<endl;
  }

  cout<<db["Apple"]<<endl;
  db["Apple"]=300;
  cout<<db["Apple"]<<endl;

  db.erase("Orange");
  for(map <string,int>::iterator it=db.begin(); it!= db.end(); it++)
  {
    cout<<it->first<<" "<<it->second<<endl;
  }
  return 0;
}
