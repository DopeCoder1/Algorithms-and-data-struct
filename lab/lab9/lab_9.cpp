//Нужно взять одну из реализованных вами классов. Объявить односвязный список класса.
//Отсортировать элементы списка по какому-либо свойству
//Написать фильтр для списка объектов по свойствам классов
//Это все нужно выполнить  с применением функции из <algorithm> и <list>

#include <iostream>
#include <algorithm>
#include <string>
#include <list>//Подключаем list

using namespace std;

class Pasport{
public:
string surname,name,fname;
int day,month,year,id;
string gender,country;

Pasport()
{
surname="";
name="";
fname="";
day=0;
month=0;
year=0;
gender="";
id=0;
country="";
}

Pasport(string surname,string name,string fname,int day,int month,int year,string gender,int id,string country)
{
this->surname=surname;
this->name=name;
this->fname=fname;
this->day=day;
this->month=month;
this->year=year;
this->gender=gender;
this->id=id;
this->country=country;
}
};

class ForeignPassport:public Pasport{
public:
int f_id;
//visa
string f_country;
int f_day,f_month,f_year;

ForeignPassport():Pasport()
{
f_id=0;
f_country="";
f_day=0;
f_month=0;
f_year=0;
}

ForeignPassport(string surname,string name,string fname,int day,int month,int year,string gender,int id,string country,int f_id,string f_country,int f_day,int f_month,int f_year):Pasport(surname,name,fname,day,month,year,gender,id,country)
{
this->f_id=f_id;
this->f_country=f_country;
this->f_day=f_day;
this->f_month=f_month;
this->f_year=f_year;
}

friend ostream& operator<<(ostream& os,const ForeignPassport& v);//Перезагружаем operator cout для вывода данных из list-а ,потому что вывод через индекс[] в list-е - ни поддерживаться
};

ostream& operator<<(ostream& os,const ForeignPassport& v)//Перезагруженный вывод данных
{
os<<endl<<"Passport: "<<endl<<"Fio: "<<v.surname<<" "<<v.name<<" "<<v.fname<<endl<<"date: "<<v.day<<"/"<<v.month<<"/"<<v.year<<endl<<"id: "<<v.id<<endl<<"gender: "<<v.gender<<endl;
os<<"born in:"<<v.country<<endl;
os<<endl<<"ForeignPassport: "<<endl<<"Visa: "<<endl<<"Country: "<<v.f_country<<endl<<"date: "<<v.day<<"/"<<v.month<<"/"<<v.f_year<<endl<<"ForeignPassport id:"<<v.f_id<<endl;
return os;
}

bool compare(const ForeignPassport& v,const ForeignPassport& v2)//Создаем Компаратор для sort() ; это функция compare возвращает true или false по значению свойству year класса ForeignPassport
{
return v.year < v2.year;//Возвращает год которая больше
}

bool compare2(const ForeignPassport& v)//Создаем Компаратор для remove_if() ; это функция compare2 возвращает true или false по значению свойству country класса ForeignPassport
{
return v.country != "UA";//Возвращает страны которые не равны на UA
}

void print(list<ForeignPassport> &v,list<ForeignPassport>::iterator& it)//Вывод данных
{
for (it = v.begin(); it != v.end(); ++it)
cout <<" "<<*it;
}

void sorts(list<ForeignPassport> &v)//Создаем функцию sorts
{
v.sort(compare);//Сортируем list через sort() которая принимает только один параметр(компаратор) compare
}

void filter(list<ForeignPassport>& v)//Создаем функцию filter
{
v.remove_if(compare2);//Удаляем элементы list через remove_if()которая принимает параметр(компаратор) compare2
}

int main()
{
list<ForeignPassport> v;//Создаем list
list<ForeignPassport>::iterator it;//Создаем итератор
v.push_back(ForeignPassport("Ailmbayev","Dias","Teltayulu",15,1,2002,"M",228,"KZ",667,"Kazakhstan",30,9,2021));//Вводим данные в конец list-a
v.push_back(ForeignPassport("Ailmbayev","Diaz","Teltayulu",15,1,2000,"M",228,"UA",667,"Ukraine",30,9,2021));
print(v,it);//Выводим Данные
sorts(v);//Сортируем
cout<<endl<<"----------- after sort -------------------"<<endl;
print(v,it);//Выводим данные
filter(v);//Фильтруем
cout<<endl<<"----------- after filter -------------------"<<endl;
print(v,it);//Выводим данные

return 0;
}
