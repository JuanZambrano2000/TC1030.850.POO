#include <iostream> 
using namespace std;
class Fecha{
    public:
        Fecha(int _day, int _month, int _year);
        void setDay(int _day);
        int getDay();
        void setMonth(int _month);
        int getMonth();
        void setYear(int _year);
        int getYear();
        void mostrarFecha();
    private:
        int day;
        int month;
        int year;
};
Fecha::Fecha(int _day, int _month, int _year){
    setDay(_day);
    setMonth(_month);
    setYear(_year);
};
void Fecha::setDay(int _day){
    day = _day;
};
int Fecha::getDay(){
    return day;
};
void Fecha::setMonth(int _month){
    if(_month<=12 && _month>=1){
        month = _month;   
    }else{
        month = 1;
    } 
};
int Fecha::getMonth(){
    return month;
};
void Fecha::setYear(int _year){
    year=_year;
};
int Fecha::getYear(){
    return year;
}
void Fecha::mostrarFecha(){
    cout<<getDay()<<"/"<<getMonth()<<"/"<<getYear()<<endl;
}
int main(){
    Fecha f01(15,3,2005);
    f01.mostrarFecha();
    f01.setMonth(15);
    f01.setDay(8);
    f01.setYear(2012);
    f01.mostrarFecha();
}