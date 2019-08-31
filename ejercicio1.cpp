#include <iostream>
#include <vector>
#include <iomanip>
 
using namespace std;
 
float calcularpromedio(vector<int> &v);
vector<int> leerConsola();
 
vector<int> leerConsola() {
   vector<int> lista;
   int numer;
   while (true){
       cout<<"Ingrese un numero positivo y ponga -1 después del último número que quiera ingresar: ";
       cin>>numer;
       if (numer<0) {
           break;
       }
       lista.push_back(numer);
   }
   return lista;
   
}
 
float calcularpromedio(vector<int> &v) {
 
   int suma=0;
   for (int i=0; i<v.size(); i++) {
       suma += v[i];
   }
 
   
   return suma/v.size();
}
 
int main() {
 
   cout<<"Calcular el promedio de los ingresados:\n\n";
   vector<int> leer_usuario = leerConsola();
   float promedio_elemento = calcularpromedio(leer_usuario);
   cout<<"El promedio es: "<<fixed<<setprecision(2)<<promedio_elemento<<"\n";
 
   return 0;
}


 

 
