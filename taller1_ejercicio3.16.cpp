#include <iostream>
using namespace std;

bool esPrimo(int n) 
{
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) 
    { if (n % i == 0) return false;}
    return true;
}

bool esPotenciaDe2(int n)
    {return n > 0 && (n & (n - 1)) == 0;}
int main() 
{
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (numero < 0)
    {cout << "El numero es negativo.";}
    else if (numero >= 30)
    {cout << "El numero es 30 o mayor.";}

    else if (numero == 0) 
    {cout << "cero";}
    else if (numero == 1)
    {cout << "unidad";} 
    
    else 
    {
    if (esPotenciaDe2(numero)) 
    {cout << "El numero es una potencia de 2.";}
    else if (esPrimo(numero))
    {cout << "El numero es primo.";}
    else
    {cout << "El numero es compuesto.";}
    }

}