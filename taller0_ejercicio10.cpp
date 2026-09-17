#include <iostream>
using namespace std;
int main()
    {
    float producto,valor_venta;
    cout<<"Precio del articulo comprado: ";
    cin>>producto ;
    valor_venta=(producto*0.3)+producto;
    cout<<"El precio de venta para el articulo es: "<<valor_venta<< " pesos";
    }