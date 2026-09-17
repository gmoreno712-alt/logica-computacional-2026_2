#include <iostream>
using namespace std;
int main()
    {
    //T0 ejercicio 1
    //Variables de entrada
    float capital;
    float tasa;
    int tiempo;
    //Variables de salida
    float ganancia;
    float capitalfinal;
    //Condiciones
    cout<<"Ingresa el valor del capital: ";
    cin>>capital ;
    cout<<"Ingresa el valor de la tasa de interes: ";
    cin>>tasa ;
    cout<<"Ingresa la cantidad de meses: ";
    cin>>tiempo ;
    ganancia = capital*tasa*tiempo;
    capitalfinal = ganancia+capital;
    cout<<"La ganancia obtenida fue: "<<ganancia<< " pesos\n";
    cout<<"La cantidad final obtenida fue: "<<capitalfinal<< " pesos";
    }

