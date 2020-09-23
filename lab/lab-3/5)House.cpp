#include <iostream>
#include <string.h>


using namespace std;
class House{
private:
  string adress;
  int stair;
  int room;
  double s;
public:
  House()
  {
    adress=" ";
    stair=0;
    room=0;
    s=0;
  }

  House(string adress,int stair,int room,double s)
  {
    this->adress=adress;
    this->stair=stair;
    this->room=room;
    this->s=s;
  }

  friend void ls_flatRoom(int n,House *ls,int rooms);
  friend void ls_flatRoomStair(int n,House *ls,int rooms,int stairs);
  friend void ls_size(int n,House *ls,double size);
  friend void show(int n,House *ls);
};

void show(int n,House *ls)
{
  for(int j=0;j<n;j++)
  {
    cout<<ls[j].adress<<" "<<ls[j].stair<<" "<<ls[j].room<<" "<<ls[j].s;
  }
}

void ls_flatRoom(int n,House *ls,int rooms)
{
  for(int j=0;j<n;j++)
  {
    if(ls[j].room==rooms)
    {
      cout<<"------------------"<<endl;
      cout<<rooms<<" : "<<"room :";
      cout<<ls[j].adress<<endl;
      cout<<"------------------"<<endl;

    }
  }
}

void ls_flatRoomStair(int n,House *ls,int rooms,int stairs)
{
  for(int j=0;j<n;j++)
  {
    if(ls[j].room==rooms && ls[j].stair==stairs)
    {
      cout<<"------------------"<<endl;
      cout<<rooms<<" :"<<stairs<<" :"<<"room and stairs  :";
      cout<<ls[j].adress<<endl;
      cout<<"------------------"<<endl;

    }
  }
}

void ls_size(int n,House *ls,double size)
{
  for(int j=0;j<n;j++)
  {
    if(ls[j].s>size)
    {
      cout<<"------------------"<<endl;
      cout<<size<<": "<<" "<<"size :";
      cout<<ls[j].adress<<endl;
      cout<<"------------------"<<endl;
    }
  }
}

int main()
{
  string adress;
  int stair;
  int room;
  double ss;
  int n;
  cin>>n;
  House *s=new House[n];
  for(int j=0;j<n;j++)
  {
    cin>> adress >> stair >> room >> ss;
    s[j]=House(adress,stair,room,ss);
  }

  int rooms;
  int stair2;
  double size2;
  cout<<"enter room: ";
  cin>>rooms;
  cout<<"enter stair: ";
  cin>>stair2;
  cout<<"enter size: ";
  cin>>size2;
  ls_flatRoom(n,s,rooms);
  ls_flatRoomStair(n,s,rooms,stair2);
  ls_size(n,s,size2);

  delete[] s;
  return 0;
}
