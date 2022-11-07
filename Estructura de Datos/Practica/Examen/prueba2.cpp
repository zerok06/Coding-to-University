#include <iostream>
#include <cstdlib>
#include <math.h>       /* para poder usar pow */
using namespace std;

int main()
{
 int valorBaseDiez;
 int base;
 int resultado = 0;
 int numIteraciones = 0;
 int i = 0;
 int temp = 1;
 cout<<"Ingresa valor en base 10: ";
 cin>>valorBaseDiez;
 cout<<"Ingresa base: ";
 cin>>base;
 while(temp>0)
 {
  resultado = ((temp % base) * (pow(10,numIteraciones))) + (resultado);
  temp = temp / base;
  numIteraciones++;
 }
 
 cout<<resultado<<endl;

 return 0;
}