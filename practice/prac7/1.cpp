// #include <iostream>
// #include <stdlib.h>
// #include <time.h>
//
//
// int random_search(int x,int y)
// {
//   // srand(time(NULL));
//   // int value=rand()%y+x;
//   int value=2000;
//   std::cout<<"random value is "<<value<<std::endl;
//   int low=x;
//   int hight=y;
//   int middle;
//   int c=0;
//   while(low<=hight)
//   {
//     c++;
//     middle=(low+hight)/2;
//     if(middle==value)
//     {
//       return c;
//     }
//     else if(middle<value)
//     {
//       low=middle+1;
//       c++;
//     }
//     else if(middle>value)
//     {
//       hight=middle-1;
//     }
//   }
//   return -1;
// }
//
// int main()
// {
//   std::cout<<random_search(1,2000);
//   return 0;
// }
nclude <iostream>
#include <list>
#include <iterator>
using namespace std;
class A {
    public:
        A()=default;
        A(string s, string n ):surname(s),name(n) {}
        ~A(){}
        friend bool com(const A &, const A&);
        friend ostream& operator<<(ostream &os, const A &a) {
            os<<a.name<<" "<<a.surname<<endl;
            return os;
        }
    private:
        string surname;
        string name;
};
bool com(const A &a, const A &b){
    return a.name<b.name;
}
int main() {
    list<A>l {A("Jensen","Adam"),A("Reed","Meg"),A("Cassan","Eliza")};
    l.sort(com);
    copy(l.begin(),l.end(),ostream_iterator<A>(cout,"\n"));
}
