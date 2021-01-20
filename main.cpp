#include <iostream>
#include <cstring>
#include <typeinfo>
#include <cstdlib>

using namespace std;

class date{
private:
    int day;
    int year;
    int month;
public:
    date(){ //без параметров
        day = 31;
        month = 12;
        year = 2020;
    }
    date(int year){ //с одним параметром
        this->year = year;
        month = 12;
        day = 31;
    }
    date(int day, int month, int year){ //со всеми параметрами
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void output_date_postavk();
    int Read_Int();
    //void Init(int day,int month,int year);
    void Display();
    int Add(date a,date b);
    int get_year();
    date& operator=(const date &icecream_date);
};
class icecream {
private:
    int id;
    static int id_gener;
    string name;
    int massa;
    int milk;
    int expiration_date, chocolate;
    string country;
    date date_post;
    char* data;
public:
    icecream(){
        name = "IceBerg";
        massa = 400;
        milk = 300;
        expiration_date = 120;
        chocolate = 0;
        country = "Germany";
        date_post = date();
        char new_string[] = "Welcome";
        data=new char(strlen(new_string)-1);
        strcpy(data,new_string);
    }
    icecream(string name){
        this->name = name;
        massa = 400;
        milk = 300;
        expiration_date = 120;
        chocolate = 0;
        country = "Germany";
        date_post = date();
    }
    icecream(string name, int massa, int milk, int expiration_date, int chocolate, string country, int day, int month, int year){
        this->name = name;
        this->massa = massa;
        this->milk = milk;
        this->expiration_date = expiration_date;
        this->chocolate = chocolate;
        this->country = country;
        date_post = date(day,month,year);
    }


    icecream(const icecream &ice){  //конструктор копии
        name = ice.name;
        massa = ice.massa;
        milk = ice.milk;
        expiration_date = ice.expiration_date;
        chocolate = ice.chocolate;
        country = ice.country;
        if(ice.data){
            char new_string[]="Welcome";
            data=new char(strlen(new_string)-1);
            strcpy(data,new_string);
        }
        else data=0;
    }

    icecream& operator= (const icecream &ice){
        name = ice.name;
        massa = ice.massa;
        milk = ice.milk;
        expiration_date = ice.expiration_date;
        chocolate = ice.chocolate;
        country = ice.country;
        date_post = ice.date_post;
        if(this==&ice)
            return *this;
        delete[] data;
        if(ice.data){
            char new_string[] = "Welcome";
            data = new char(strlen(new_string)-1);
            strcpy(data,new_string);
        }
        else data = 0;
        return *this;
    }

    ~icecream(){
        delete[] data;
    }

    string Read_String();
    int Read_Int();
    void Display();
    //void Init(string name, int massa, int milk, int expiration_date, int chocolate, string country, int day, int month, int year);
    int Add(icecream a, icecream b);
    void Country();
    void Sod_Chocolate();
    void output_date_postavk();
    int& get_massa();
    void get_milk(int *icecream_milk);
    friend void Display_name(icecream& icecream_a);
    friend icecream operator+(const icecream &p_1,const icecream &p_2);  //добавлено
    icecream& operator++();  //добавлено
    icecream operator++(int);  //добавлено
    int one(icecream *p);
    //int two();
    int get_id();
    static int get_id_now();
    char* get_data();
    void Init_icecream_in();
};
int icecream::id_gener = 1;

int icecream::get_id(){
    id = id_gener++;
    return id;
}
//статический метод для получения значения текущего ID без создания объекта класса

int icecream::get_id_now(){
    return id_gener;
}
icecream operator+(const icecream &p_1,const icecream &p_2){
    icecream p_3;
    p_3.massa=p_1.massa+p_2.massa;
    return p_3;
}
icecream& icecream::operator++(){ //постфикс
    massa++;
    return *this;
}
icecream icecream::operator++(int temp){ //префикс
    icecream p_2;
    p_2.massa=temp;
    ++(*this);
    return p_2;
}
string icecream::Read_String(){
    string str;
    getline(cin,str);
    return str;
}
void date::Display() {
    cout << "Day:" << day << endl;
    cout << "Month:" << month << endl;
    cout << "Year:" << year << endl;
}
void icecream::Display() {
    cout<<"Name:"<<name<<endl;
    cout<<"Massa:"<<massa<<endl;
    cout<<"Chocolate:";
    if (chocolate == 1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    cout<<"Milk:"<<milk<<endl;
    cout<<"Exp.Date:"<<expiration_date<<endl;
    cout<<"Country:"<<country<<endl;
    date_post.Display();
    cout<<" "<<endl;
}
int date::Add(date d1, date d2) {
    date d3;
    d3.year = d1.year + d2.year;
    return d3.year;
}
int icecream::Add(icecream ice1, icecream ice2) {
    icecream ice3;
    ice3.massa = ice1.massa + ice2.massa;
    return ice3.massa;
}

int icecream::Read_Int() {
    int c;
    cin >> c;
    return c;
}
int date::Read_Int() {
    int c;
    cin >> c;
    return c;
}
void icecream::Country() {
    cout << country;
}
void icecream::Sod_Chocolate() {
    cout<<"Chocolate:";
    if (chocolate == 1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
void date::output_date_postavk() {
    cout << day << "." << month << "." << year << endl;
}
void icecream::output_date_postavk() {
    date_post.output_date_postavk();
}
int& icecream::get_massa(){
    return massa;
}
void icecream::get_milk(int *milk_ice){
    *milk_ice=milk;
}
void Display_name(icecream &icecream_a){
    cout<<icecream_a.name;
}

int date::get_year(){
    return year;
}
char* icecream::get_data(){
    return data;
}
date& date::operator=(const date &icecream_date){
    day = icecream_date.day;
    month = icecream_date.month;
    year = icecream_date.year;
    return *this;
}
int check_string(string str){
    int i=0;
    while(str[i]){
        if( (int)str[i]<'A' || ((int)str[i]>'Z' && (int)str[i]<'a') || (int)str[i]>'z'){
        return 1;
        }
     i++;
     }
     return 0;
}
int check_int(string str){
    int i=0;
    while(str[i]){
        if( (int)str[i]<'0' || (int)str[i]>'9'){
        return 1;
        }
     i++;
     }
     return 0;
}
void icecream::Init_icecream_in(){
    int flag=1;

    while(flag)
    try{
       cout<<"Введите название мороженого"<<endl;
        cin>>name;
       if(check_string(name))
            throw -1;//генерируем исключение типа int
        cout<<"Введите страну производства"<<endl;
        cin>>country;
       if(check_string(country))
            throw -1;//генерируем исключение типа int
        cout<<"Введите массу"<<endl;
        char m[5];
        cin>>m;
       if(check_int(m))
            throw -1;
        massa = atoi(m);
       cout<<"Введите количество молока в мл"<<endl;
        char mi[5];
        cin>>mi;
       if(check_int(mi))
            throw -1;
        milk = atoi(mi);
        cout<<"Введите срок годности в днях"<<endl;
        char ex[5];
        cin>>ex;
       if(check_int(ex))
            throw -1;
        expiration_date = atoi(ex);
        cout<<"Введите наличие шоколада: 1 - есть, 0 - нет"<<endl;
        char ch[5];
        cin>>ch;
       if(check_int(ch))
            throw -1;
        chocolate = atoi(ch);
        int day,month,year;
        cout<<"Введите день поставки (от 1 до 31)"<<endl;
        char day_c[2];
        cin>>day_c;
       if(check_int(day_c))
            throw -1;
        day = atoi(day_c);
        cout<<"Введите месяц поставки (от 1 до 12)"<<endl;
        char mont[2];
        cin>>mont;
       if(check_int(mont))
            throw -1;
        month = atoi(mont);
        cout<<"Введите год поставки"<<endl;
        char g[4];
        cin>>g;
       if(check_int(g))
            throw -1;
        year = atoi(g);
        flag = 0;
        date_post = date(day,month,year);
       }
    catch(int exception){//если появилось исключение типа exception
        cout<<"Упс... Что-то пошло не так\nНекорректно введены данные! Попробуйте еще раз.\n"<<endl;
        flag=1;
    }

}

int main()
{
    setlocale(LC_ALL,"Russian");

    string str_1 = "Slastena";
    string str_2 = "Russia";
    int m = 250;
    int mil = 100;
    int ex = 60;
    int ch = 1;
    int x = 12;
    int y = 10;
    int k = 2020;

    cout<<"Работа с одномерным массивом объектов класса"<<endl;
    int choice;
    icecream ice_array[3];
    for(int i=0;i<3;i++){
        cout<<"Напишите номер варианта действия:"<<endl;
        cout<<"1. Ввести новые данные о мороженом"<<endl;
        cout<<"2. Вывести существующие данные"<<endl;
        cout<<"3. Вывести дату поставки существующего мороженого"<<endl;
        cin>>choice;
        switch(choice){
        case 1:
            ice_array[i].Init_icecream_in();
            ice_array[i].Display();
            break;
        case 2:
            ice_array[i] = icecream();
            ice_array[i].Display();
            break;
        case 3:
            ice_array[i] = icecream();
            ice_array[i].output_date_postavk();
            break;
        default:
            cout<<"Введите 1, 2 или 3"<<endl;
            break;
        }
    }
    cout<<"Работа с двумерным массивом объектов класса"<<endl;
    icecream ice_array_2[2][3];
    for(int i=0;i<3;++i)
    for(int j=0;j<2;++j){
        cout<<"Напишите номер варианта действия:"<<endl;
        cout<<"1. Ввести новые данные о мороженом"<<endl;
        cout<<"2. Вывести существующие данные"<<endl;
        cout<<"3. Вывести дату поставки существующего мороженого"<<endl;
        cin>>choice;
        switch(choice){
        case 1:
            ice_array_2[i][j].Init_icecream_in();
            ice_array_2[i][j].Display();
            break;
        case 2:
            ice_array_2[i][j] = icecream();
            ice_array_2[i][j].Display();
            break;
        case 3:
            ice_array_2[i][j] = icecream();
            ice_array_2[i][j].output_date_postavk();
            break;
        default:
            cout<<"Введите 1, 2 или 3"<<endl;
            break;
        }
    }
    /*icecream ice1;
    ice1.Init_icecream_in();
    ice1.Display();*/

}
