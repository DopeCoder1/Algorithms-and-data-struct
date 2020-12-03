#include <iostream>
#include <set>
#include <stdlib.h>

using namespace std;

int main()
{
  //set-без дубликатов
  //multiset -с дубликатомы
  multiset<int >tree;

  //Добавляем данные
  tree.insert(23);
  tree.insert(12);
  tree.insert(40);
  tree.insert(16);
  //set - это бинарное дерево

                            //   23[left:right]
                    // 12[left:right]
                                     //40[left:right]
                                //16[left:right]


  //set-строгая структура
  //set-автоматический сортирован

  //вывод данных 1)
  // for(int j:tree)
  // {
  //   cout<<j<<endl;
  // }

  // //вывод данных 2)
  // for(set<int>::iterator it=tree.begin(); it != tree.end(); it++)
  // {
  //   cout<<*it<<" ";
  // }

  set <int> s;

  for(int j=0;j<15;j++)
  {
    s.insert(rand()%10);
  }
  for(int j:tree)
  {
    cout<<j<<" ";
  }

  //проверка на нахождение элемента в бинарном дереве -find()

  set <int>::iterator it=tree.find(12);
  cout<<":result is "<<*it<<endl;

  //удаление элмента в бинарном дереве
  int isRemove =tree.erase(40);
  cout<<"isRemove: "<<isRemove<<endl;

  //некоторые функции в multiset lower_bound,upper_bound
  multiset <int> ::iterator its=tree.lower_bound(12);
  cout<<"lowe bound:"<<*its<<endl;
  return 0;
}
