
 
 
#include <iostream>
#include <vector>
#include <unordered_map>
 
using namespace std;
 
float moda(vector<int> &lista);
vector<int> leerconsole();
 
vector<int> leerconsole() {
   vector<int> lista;
   int numer;
   while (true){
       cout<<"Ingrese un numero positivo y ponga -1 después del último número que quiera ingresar:";
       cin>>numer;
       if (numer<0) {
           break;
       }
       lista.push_back(numer);
   }
   return lista;
 
}
 
float moda(vector<int> &lista) {
   unordered_map<int, int> map;
   for (int i=0; i <lista.size(); i++) {
       map[lista[i]]++;
   }
   int moda, max=0;
   for (auto &it:map) {
       if (it.second>max) {
           max = it.second;
           moda = it.first;
       }
   }
 
 
   return moda;
}
 
 
int main() {
   cout<<"Calcular la moda de los numeros ingresados:\n\n";
   vector<int> leer_usuario = leerconsole();
   int moda_elemento = moda(leer_usuario);
   cout<<"La moda es: "<<moda_elemento<<"\n";
   return 0;
}
