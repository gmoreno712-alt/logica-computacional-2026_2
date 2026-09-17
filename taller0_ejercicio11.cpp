#include <iostream>
using namespace std;
int main()
    {
    float ip1,ip2,ip3,pp1,pp2,pp3,si;
    cout<<"Invercion de la persona 1: ";
    cin>>ip1 ;
    cout<<"Invercion de la persona 2: ";
    cin>>ip2 ;
    cout<<"Invercion de la persona 3: ";
    cin>>ip3 ;
    si=ip1+ip2+ip3;
    pp1=(100*ip1)/si;
    pp2=(100*ip2)/si;
    pp3=(100*ip3)/si;
    cout<<"El porcentaje de la empresa para la persona 1 es: "<<pp1<< "% \n";
    cout<<"El porcentaje de la empresa para la persona 2 es: "<<pp2<< "% \n";
    cout<<"El porcentaje de la empresa para la persona 3 es: "<<pp3<< "%";
    }