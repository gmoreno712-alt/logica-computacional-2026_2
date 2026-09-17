#include <iostream>
using namespace std;
int main()
    {
    float pg,pt,pp,presupuesto;
    cout<<"El presupuesto total es: ";
    cin>>presupuesto ;
    pg=presupuesto*0.4;
    pt=presupuesto*0.3;
    pp=presupuesto*0.3;
    cout<<"El presupuesto anual para el area de ginecologia es: "<<pg<< " pesos\n";
    cout<<"El presupuesto anual para el area de traumatologia es: "<<pt<< " pesos\n";
    cout<<"El presupuesto anual para el area de pediatria es: "<<pp<< " pesos";
    }