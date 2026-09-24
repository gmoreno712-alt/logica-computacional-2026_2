#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
float decimales;
cout<<"cifras decimales: ";
cin>>decimales;
cout<<fixed<<setprecision(decimales)<<(M_PI);
}