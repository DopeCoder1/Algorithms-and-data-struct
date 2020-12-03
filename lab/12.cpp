#include <iostream>
#include <map>

using namespace std;

void lsOfBus(multimap <string,int> &db)
{
  for(multimap<string,int>::iterator it=db.begin(); it!= db.end(); it++)
  {
      cout<<it->first<<" : "<<it->second<<endl;
  }

  for(multimap<string,int>::iterator it=db.begin(); it!= db.end(); it++)
  {

  }
}

int main()
{d
  multimap <string,int> MyMap;
  MyMap.emplace("015rba02",22);
  MyMap.emplace("014haz02",44);
  MyMap.emplace("013ghz02",22);

  lsOfBus(MyMap);


  return 0;
}
