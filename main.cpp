#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
 float peso = 0;
 float altura= 0;
 float resultado = 0;

 cout << "ingrese su peso: ";
 cin >> peso;
 cout<<"ingrese su altura: ";
 cin>>altura ;
 resultado = peso/ (altura * altura);

 cout <<"tu IMC es: " << resultado << endl;

 if(resultado < 16){
    cout << "bajo de peso severo";
 }

  else if(resultado >= 16.5 && resultado<18.5 ){
    cout << "su peso es bajo";
  }

  else if(resultado >= 18.5 && resultado<25 ){
    cout << "peso normal";
  }

  else if(resultado >= 25 && resultado<30 ){
    cout << "sobrepeso";
  }

  else if(resultado >= 30 && resultado<35 ){
    cout << "obesidad tipo 1 (moderada)";
  }

  else if(resultado >= 35 && resultado<40 ){
    cout << "obesidad tipo 2 (severa)";
  }

  else if(resultado >= 40){
    cout << "obesidad tipo 3  (morbida)";
  }

 return 0;
}
