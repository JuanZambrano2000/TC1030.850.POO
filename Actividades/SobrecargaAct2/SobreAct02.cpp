#include <iostream>
using namespace std;
class Complejo{
    public:
        double a, b;
        Complejo(int a, int b){
            this->a = a;
            this->b = b;
        };
        Complejo operator + (Complejo com2){
            Complejo newComplejo(0,0);
            newComplejo.a = this->a + com2.a;
            newComplejo.b = this->b + com2.b;
            return newComplejo;
        };
        Complejo operator - (Complejo com2){
            Complejo newComplejo(0,0);
            newComplejo.a = this->a - com2.a;
            newComplejo.b = this->b - com2.b;
            return newComplejo;
        };
        Complejo operator * (Complejo com2){
            Complejo newComplejo(0,0);
            newComplejo.a = (this->a*com2.a)-(this->b*com2.b);
            newComplejo.b = (this->a*com2.b)-(this->b*com2.a);
            return newComplejo;
        };
        Complejo operator / (Complejo com2){
            Complejo newComplejo(0,0);
            newComplejo.a = ((this->a*com2.a)+(this->b*com2.b))/((com2.a*com2.a)+(this->b*this->b));
            newComplejo.b = (((-1*this->a*com2.b)+(this->b*com2.a))/(com2.a*com2.a)+(this->b*this->b));
            return newComplejo;
        };
        Complejo operator % (float cantidad){
            Complejo newComplejo(0,0);
            newComplejo.a = this->a*cantidad;
            newComplejo.b = this->b*cantidad;
            return newComplejo;
        };
};
int main(){
    Complejo z1(1,2);
    Complejo z2(2,3);
    Complejo z3 = z1 + z2;
    Complejo z4 = z1 - z2;
    Complejo z5 = z1 * z2;
    Complejo z6 = z1 / z2;
    Complejo z7 = z1 % 2;
    cout<<"Resultado suma: "<<z3.a<<","<<z3.b<<"i"<<endl;
    cout<<"Resultado diferencia: "<<z4.a<<","<<z4.b<<"i"<<endl;
    cout<<"Resultado producto: "<<z5.a<<","<<z5.b<<"i"<<endl;
    cout<<"Resultado division: "<<z6.a<<","<<z6.b<<"i"<<endl;
    cout<<"Resultado producto por escalar: "<<z7.a<<","<<z7.b<<"i"<<endl;
}