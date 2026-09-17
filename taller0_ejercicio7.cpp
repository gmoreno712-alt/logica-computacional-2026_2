#include <iostream>
using namespace std;
int main()
    {
    float pesos,dolar,rr;
    cout<<"cantidad de pesos a cambiar: ";
    cin>>pesos ;
    cout<<"valor del dolar hoy: ";
    cin>>dolar ;
    rr=pesos/dolar;
    cout<<"su cambio a dorales es: "<<rr<< " dolares";
    }