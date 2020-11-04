#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    //                   adr     adr    adr    adr      adr   adr    adr
    //vector :&xxf2-[[ 5    ][ 6     ][ 4   ][  5  ]]{[ 3  ][ 2   ][ 1  ]}

    //after push back:&xxf4-[[][][][][][][]]{[][][][]}
    //vector insert O(n) access ,index O(1) ,search O(n)

    //Linked List:
    //     adress                       adress
    //  [      4   ]                 [    10     ]


//  adress
// [   3   ]

                      // adress
                      //[    10  ]

  list <int> ls;
  ls.push_back(20);
  ls.push_back(100);
  ls.push_front(90);
  for(list<int>::iterator j=ls.begin();j!=ls.end();j++)
  {
    cout<<*j<<" ";
  }
  //sort()
  cout<<"size: "<<ls.size()<<endl;
  
  return 0;
}
