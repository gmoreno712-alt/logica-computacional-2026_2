#include <iostream>
using namespace std;
int main()
{
int seg1,seg,min;
cout<<"valor en segundos: ";
cin>>seg1 ;
min=seg1/60;
seg=seg1%60;
cout<<"El tiempo es: "<<min<< " minutos con "<<seg<< " segundos";
}