#include <iostream>
#include<string>
#include<vector>

int main() {
  int a,b,c;
  using namespace std;
  std::cout <<"Ingrese tres numeros separados por un espacio:";

  cin>>a>>b>>c;
  if (a>b&&a>c){
    cout<<"El mayor valor es:"<<a;
  }
  else if(b>a&&b>c){
    cout<<"El mayor valor es:"<<b;
  }
  else{
    cout<<"El mayor valor es:"<<c;
  }
}
