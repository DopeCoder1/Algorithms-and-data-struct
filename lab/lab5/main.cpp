#include <iostream>
#include <string.h>

using namespace std;

class Instrument{
protected:
  double size,price;
  string play;
public:
  Instrument()
  {
    play="";
    size=0;
    price=0;
  }

  Instrument(double price,double size,string play)
  {
    this->price=price;
    this->size=size;
    this->play=play;
  }

  void print(){
    cout<<"price: "<<price<<endl;
    cout<<"size :"<<size<<endl;
    cout<<"play with finger or beat :"<<play<<endl;
  }

};

class Drum:public Instrument{

public:
  Drum():Instrument()
  {

  }

  Drum(double price,double size,string play):Instrument(price,size,play)
  {
    cout<<"It's Drum"<<endl;
  }

};

class Dombra:public Instrument{

public:
  Dombra():Instrument()
  {

  }
  Dombra(double price,double size,string play):Instrument(price,size,play)
  {
    cout<<"It's Dombra"<<endl;
  }

};

class Flute:public Instrument{
public:
  Flute():Instrument()
  {

  }
  Flute(double price,double size,string play):Instrument(price,size,play)
  {
    cout<<"It's Flute"<<endl;
  }
};

class Cello:public Instrument{
public:
  Cello():Instrument()
  {
  }
  Cello(double price,double size,string play):Instrument(price,size,play)
  {
    cout<<"It's Cello"<<endl;
  }
};



int main()
{

  Drum p(100,80,"beat");
  p.print();

  cout<<endl;

  Dombra dm(300,90,"finger");
  dm.print();

  cout<<endl;

  Flute f(400,80,"finger");
  f.print();

  cout<<endl;

  Cello c(500,40,"finger");
  c.print();

  return 0;
}
