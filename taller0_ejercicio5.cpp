#include <iostream>
using namespace std;
int main()
    {
    float estudiantes,hombres,mujeres,porcentaje_hombres,porcentaje_mujeres;
    cout<<"Cuantos estudiantes hay en el curso? ";
    cin>>estudiantes;
    cout<<"Cuantos hombres hay en el curso? ";
    cin>>hombres;
    cout<<"Cuantas mujeres hay en el curso? ";
    cin>>mujeres;
    porcentaje_hombres=(hombres/estudiantes)*100;
    cout<<"El porcentaje de hombres en el curso es de "<<porcentaje_hombres<< "% hombres ";
    porcentaje_mujeres=(mujeres/estudiantes)*100;
    cout<<"y el porcentaje de mujeres en el curso es de "<<porcentaje_mujeres<< "% mujeres" ; 
    }    
    