#include <iostream>
#include <map>
#include <string.h>

using namespace std;

void search(string key,map <string,string> &dict)
{
  if(dict[key] == "")
  {
    cout<<"None";
  }
  else{
    cout<<key<<":"<<dict[key]<<endl;
  }
}


void add(string key,string value,map <string,string> &dict)
{
  dict.emplace(key,value);
}


void del(string key,map <string,string> &dict)
{
  dict.erase(key);
}


void edit(string key,string edits,map <string,string> &dict)
{
  dict[key] = edits;
}


int main()
{
  setlocale(LC_ALL, "Russian");
  map <string,string> db;
  add("Бегать","Run",db);
  add("Стрелять","Shot",db);
  search("Бегать",db);
  search("Стрелять",db);
  edit("Стрелять","ATU",db);
  search("Стрелять",db);
  del("Стрелять",db);
  search("Стрелять",db);
  return 0;
}
