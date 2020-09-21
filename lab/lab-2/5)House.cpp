#include <iostream>
#include <string>

using namespace std;


class House{
private:
  string adress;
  int stair;
  int room;
  double s;

public:
  //setter()
  void set_adress(string adress)
  {
    this->adress=adress;
  }

  void set_stair(int stair)
  {
    this->stair=stair;
  }

  void set_room(int room)
  {
    this->room=room;
  }

  void set_size(double s)
  {
    this->s=s;
  }



  //getter()
  string get_adress()
  {
    return adress;
  }

  int get_stair()
  {
    return stair;
  }

  int get_room()
  {
    return room;
  }

  double get_size()
  {
    return s;
  }

  friend void ls_flatRoom(int n,House *ls,int rooms);
  friend void ls_flatRoomStair(int n,House *ls2,int rooms,int stairs);
  friend void ls_size(int n,House *ls3,double size);

};

  void ls_flatRoom(int n,House *ls,int rooms)
  {
    for(int j=0;j<n;j++)
    {
      if(ls[j].get_room()==rooms)
      {
        cout<<"------------------"<<endl;
        cout<<rooms<<" : "<<"room :";
        cout<<ls[j].adress<<endl;
        cout<<"------------------"<<endl;

      }
    }
  }

  void ls_flatRoomStair(int n,House *ls2,int rooms,int stairs)
  {
    for(int j=0;j<n;j++)
    {
      if(ls2[j].get_room()==rooms && ls2[j].get_stair()==stairs)
      {
        cout<<"------------------"<<endl;
        cout<<rooms<<" :"<<stairs<<" :"<<"room and stairs  :";
        cout<<ls2[j].adress<<endl;
        cout<<"------------------"<<endl;

      }
    }
  }

  void ls_size(int n,House *ls3,double size)
  {
    for(int j=0;j<n;j++)
    {
      if(ls3[j].get_size()>size)
      {
        cout<<"------------------"<<endl;
        cout<<size<<": "<<" "<<"size :";
        cout<<ls3[j].adress<<endl;
        cout<<"------------------"<<endl;
      }
    }
}

void install_rooms(int *n)
{
  cout<<"enter rooms: ";
  cin>>*n;
}

void install_stairs(int *n)
{
  cout<<"enter stairs: ";
  cin>>*n;
}

void install(int n,int *adress,int *stair,int *room,double *s)
{
  House *p;
  cout<<"enter elements:";
  p=new House[n];
  for(int j=0;j<n;j++)
  {
    cin>> *adress >> *stair >> *room >> *s;
    p[j].set_adress(adress);
    p[j].set_stair(stair);
    p[j].set_room(room);
    p[j].set_s(s);
  }
}

int main()
{

  cin>>n;
  p=new House[n];
  string adress;
  int stair;
  int room;
  double s;
  install_rooms(n);
  install_stairs(n);

  delete[] p;
  return 0;
}
