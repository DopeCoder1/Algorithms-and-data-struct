//Нужно взять одну из реализованных вами классов. Объявить вектор класса.
//Отсортировать элементы вектора по какому-либо свойству
//Написать фильтр для вектора объектов по свойствам классов
//Это все нужно выполнить  с применением функции из <algorithm> и <vector>
//Code:

#include <iostream>
#include <vector>//Подключаем vector и algorithm
#include <algorithm>

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

void print(){
cout<<endl<<"Passport: "<<endl<<"Fio: "<<surname<<" "<<name<<" "<<fname<<endl<<"date: "<<day<<"/"<<month<<"/"<<year<<endl<<"id: "<<id<<endl<<"gender: "<<gender<<endl;
cout<<"born in:"<<country<<endl;
cout<<endl<<"ForeignPassport: "<<endl<<"Visa: "<<endl<<"Country: "<<f_country<<endl<<"date: "<<day<<"/"<<month<<"/"<<f_year<<endl<<"ForeignPassport id:"<<f_id<<endl;
}
};

bool compare(const ForeignPassport &v,const ForeignPassport &v2)//Создаем Компаратор для sort() и remove_if(); это функция compare возвращает true или false по значению свойству класса year
{
return v.year < v2.year;//Возвращает год которая больше
}

bool compare2(const ForeignPassport& v)//Создаем Компаратор для remove_if(); это функция compare2 возвращает true или false по значению свойству класса country
{
return v.country != "UA";//Возвращает страны которые не равны на UA
}

void printf(vector<ForeignPassport> &v)//Создаем функция, которая выводит данные из динамического массива
{
for(int j=0;j<v.size();j++)
{
v[j].print();
}
}

void sorts(vector<ForeignPassport> &v)//Создаем функция которая Сортирует динамический массив по свойством класса который мы задали (year)
{
sort(v.begin(),v.end(),compare); //используем функция sort-для сортировки динамического массива,sort() принимает 3 параметра, начальный итератор, конечный итератор, Компаратор-который нужен, чтобы сортировать по определённому свойству класса
}

void filter(vector<ForeignPassport>& v)//Создаем функция filter, чтобы фильтровать по свойству класса
{
auto ls=remove_if(v.begin(),v.end(),compare2);//Создаем итератор
v.erase(ls,v.end());//Метод erase удаляет данные по итератору -erase принимает два параметра(начальный итератор,конец итератора)
}
int main()
{
vector<ForeignPassport> v;//Создаем вектор
v.push_back(ForeignPassport("Ailmbayev","Dias","Teltayulu",15,1,2002,"M",228,"KZ",667,"Kazakhstan",30,9,2021));//Добавляем данные в конец вектора
v.push_back(ForeignPassport("Ailmbayev","Diaz","Teltayulu",15,1,2000,"M",228,"UA",667,"Ukraine",30,9,2021));
printf(v);//выводим данные
sorts(v);//Сортируем
cout<<endl<<"----------- after sort -------------------"<<endl;
printf(v);//выводим новые данные
filter(v);//фильтруем
cout<<endl<<"----------- after filter -------------------"<<endl;
printf(v);//выводим новые данные

return 0;
}
