#include <iostream>
#include <stdexcept> 
#include <math.h> 
#include <string> 
using std::cout;
using std::cin;
using std::invalid_argument;
using std::string;

int main() {

    cout<<"***************************************************\n";
    cout<<"                     MENU                          \n";
    cout<<"***************************************************\n";
    cout<<"  1.- Add\n";
    cout<<"  2.- Resta\n";
    cout<<"  3.- Multiplicar\n";
    cout<<"  4.- Dividir\n";
    cout<<"  6.- Modulo\n";


  int g,a,b,y,sumar,multiplicar,restar,dividir,modulo,fraiz,ayuda;
  do{
  cout<<"Ingrese la opción: ";
  cin>>g;
  cout<<"Ingrese los dos números: ";
  cin>>a>>b;
  const std::string ayuda("y");
  } while (y==ayuda);
 
if (g==1){
  sumar=a+b;
 cout<<"Resultado: "<<sumar;
 cout<<"\n";
 }
 else if(g==2){
   restar=a-b;
   cout<<"Resultado: "<<restar;
   cout<<"\n";
 }
 else if(g==3){
   multiplicar=a*b;
   cout<<"Resultado: "<<multiplicar;
   cout<<"\n";
 }
 else if(g==4){
    dividir=a/b;
   cout<<"Resultado: "<<dividir;
   cout<<"\n";
 }
 else if(g==5){
   fraiz=pow(a,2)+ pow(b,2);
  modulo=sqrt(fraiz);
   cout<<"Resultado: "<<modulo;
   cout<<"\n";
 }
cout<<"Continuar?";
cin>>y;


    return 0;
}
