// inserting into a vector
#include <iostream>
#include <vector>
#include <chrono>

int main ()
{
  auto begin = std::chrono::high_resolution_clock::now();

  std::vector<int> myvector (10,100);
  std::vector<int>::iterator it;

  it = myvector.begin();
  it = myvector.insert ( it , 200 );

  myvector.insert (it,2,300);

  // "it" no longer valid, get a new one:
  it = myvector.begin();

  std::vector<int> anothervector (2,400);
  myvector.insert (it+2,anothervector.begin(),anothervector.end());

  int myarray [] = { 501,502,503 };
  myvector.insert (myvector.begin(), myarray, myarray+3);

  std::cout << "myvector contains:";
  for (it=myvector.begin(); it<myvector.end(); it++)
    std::cout << ' ' << *it;
  std::cout << '\n';

  auto end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double> duration =begin-end;
  std::cout<<"time is "<<duration.count()<<std::endl;
  return 0;
}
