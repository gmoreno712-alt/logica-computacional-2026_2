#include <iostream>
using namespace std;
int main()
    {
    float nota1,nota2,nota3,examen_final,trabajo_final,total_notas,nexamen,ntrabajo,total;
    cout<<"Valor de la nota 1: ";
    cin>>nota1 ;
    cout<<"Valor de la nota 2: ";
    cin>>nota2 ;
    cout<<"Valor de la nota 3: ";
    cin>>nota3 ;
    cout<<"Valor del examen final: ";
    cin>>examen_final ;
    cout<<"Valor del trabajo final: ";
    cin>>trabajo_final ;
    total_notas=((nota1+nota2+nota3)/3)*0.55;
    nexamen=examen_final*0.3;
    ntrabajo=trabajo_final*0.15;
    total=total_notas+ntrabajo+nexamen;
    cout<<"su nota final es: "<<total;
    }