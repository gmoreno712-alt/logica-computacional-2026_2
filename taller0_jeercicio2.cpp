#include <iostream>
using namespace std;
int main()
    {
    float sueldo_base,venta1,venta2,venta3,total_ventas,comision,total_pago;
    cout<<"Cual es el el monto de su salario? ";
    cin>>sueldo_base ;
    cout<<"Valor de venta 1: ";
    cin>>venta1 ;
    cout<<"Valor de venta 2: ";
    cin>>venta2 ;
    cout<<"Valor de venta 3: ";
    cin>>venta3 ;
    total_ventas=venta1+venta2+venta3;
    comision=total_ventas*0.10;
    total_pago=comision+sueldo_base;
    cout<<"La comision tiene un valor de: "<<comision<< " pesos\n";
    cout<<"El salario total es de: "<<total_pago<< " pesos";
    }