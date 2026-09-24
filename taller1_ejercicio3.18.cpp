#include <iostream>
using namespace std;
int main() 
{
    float no1, no2, no3;
    cout << "Ingrese el primer numero: ";
    cin >> no1;
    cout << "Ingrese el segundo numero: ";
    cin >> no2;
    cout << "Ingrese el tercer numero: ";
    cin >> no3;
    if 
    (no1 >= no2 && no1 >= no3)
        {cout << "El numero mayor es: " << no1;}
    else if 
    (no2 >= no1 && no2 >= no3)
        {cout << "El numero mayor es: " << no2;}
    else
        {cout << "El numero mayor es: " << no3;}
}