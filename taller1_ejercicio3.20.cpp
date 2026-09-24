#include <iostream>
using namespace std;
int main() 
{
    float nota;
    cout << "Ingrese la nota (0 a 10): ";
    cin >> nota;

    if (nota < 0.0 || nota > 10.0)
    {cout << "Nota no valida. Debe estar entre 0 y 10.";}
    else if (nota == 10.0)
    {cout << "Matricula de honor";}
    else if (nota >= 8.5)
    {cout << "Sobresaliente";}
    else if (nota >= 6.5)
    {cout << "Notable" ;}
    else if (nota >= 5.0)
    {cout << "Aprobado";}
    else
    {cout << "Suspenso";}
}