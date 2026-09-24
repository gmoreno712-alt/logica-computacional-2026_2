#include <iostream>

using namespace std;

int main() 
{
    float numero1, numero2, numero3;
    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;
    cout << "Ingrese el tercer numero: ";
    cin >> numero3;
    if ((numero1 <= numero2 && numero2 <= numero3)||(numero1 >= numero2 && numero2 >= numero3)) 
    {cout << "Los numeros estan en orden.";}
    else 
    {cout << "Los numeros no estan en orden.";}
}