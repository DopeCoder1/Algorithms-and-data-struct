#include <iostream>
#include <string.h>
#include <map>
#include <list>


using namespace std;


void print(map<string,int> &db)
{
  for(map <string,int>::iterator it=db.begin(); it!= db.end(); it++)
  {
    cout<<it->first<<":"<<it->second<<endl;
  }
}


void drop_element(map<string,int> &db,int cost)
{
  list <string> db_name;

  for(map<string,int>::iterator it=db.begin(); it != db.end(); it++)
  {
    if(it->second > cost)
    {
      db_name.push_back(it->first);
    }
  }

  for(list <string>::iterator it=db_name.begin(); it!= db_name.end(); it++)
  {
    db.erase(*it);
  }

}


void swap_map(map <string,int> &db)
{
  for(map <string,int>::iterator it = db.begin(); it != db.end(); it++)
  {
    cout<<it->second<<":"<<it->first<<endl;
  }
}

int main()
{
  map <string,int> comp;
  comp.emplace("RAM",38000);
  comp.emplace("CPU",98000);
  comp.emplace("GPU",180000);
  comp.emplace("MOTHERBOARD",50000);
  comp.emplace("POWER-CASE",30000);

  print(comp);
  drop_element(comp,90000);
  cout<<endl<<"--------after drop----------"<<endl;
  print(comp);
  cout<<endl<<"--------swap----------------"<<endl;
  swap_map(comp);

  return 0;
}
