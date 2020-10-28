#include <iostream>
#include <string>

using namespace std;

class Instrument{
protected:
  string play_with;
  double price;
  string type;
public:
  Instrument()
  {
    this->play_with="";
    this->price=0;
    this->type="";
  }
  Instrument(string play_with,double price,string type)
  {
    this->play_with=play_with;
    this->price=price;
    this->type=type;
  }

  string get_play()
  {
    return this->play_with;
  }

  double get_price()
  {
    return this->price;
  }

  string get_type()
  {
    return this->type;
  }

  void get_info()
  {
    cout<<"play_with: "<<play_with<<"; price: "<<price<<"; type: "<<type<<"; "<<endl;
  }
};


class Dombra:public Instrument{
public:
  Dombra():Instrument()
  {

  }
  Dombra(string play_with,double price,string type):Instrument(play_with,price,type)
  {

  }

};

class Drum:public Instrument{
public:
  Drum():Instrument()
  {

  }
  Drum(string play_with,double price,string type):Instrument(play_with,price,type)
  {

  }
};

class Flute:public Instrument{
public:
  Flute():Instrument()
  {

  }

  Flute(string play_with,double price,string type):Instrument(play_with,price,type)
  {

  }
};

class Cello:public Instrument{
public:
  Cello():Instrument()
  {

  }
  Cello(string play_with,double price,string type):Instrument(play_with,price,type)
  {

  }
};

int main()
{

  Dombra dm("hand",36000,"strunni");
  dm.get_info();
  Dombra cdn("beat",80000,"udarni");
  cdn.get_info();
  Drum dr("beat",90000,"udarni");
  dr.get_info();
  return 0;
}
