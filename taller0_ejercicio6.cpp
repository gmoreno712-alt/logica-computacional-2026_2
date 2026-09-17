#include <iostream>
using namespace std;
int main()
    {
    int año_actual,año_nacimiento,edad;
    cout<<"El año actual es: ";
    cin>>año_actual ;
    cout<<"Su año de nacimiento es: ";
    cin>>año_nacimiento ;
    edad=año_actual-año_nacimiento;
    cout<<"Su edad es: "<<edad<< " años";
    }