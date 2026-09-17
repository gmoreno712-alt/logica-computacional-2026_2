#include <iostream>
using namespace std;
main()
    {
    float compra,tasa_descuento,iva,descuento,ivat,total,total_final;
    cout<<"valor de la compra: ";
    cin>>compra ;
    cout<<"tasa de descuento: ";
    cin>>tasa_descuento ;
    cout<<"tasa de iva: ";
    cin>>iva ;
    descuento= compra*tasa_descuento/100 ;
    total_final= (compra-descuento) ;
    total= total_final+(total_final*iva/100);
    cout<<"el valor a pagar es: "<<total<< " pesos";
    }