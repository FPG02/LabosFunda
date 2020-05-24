#include <iostream>
#include <string>
using namespace std;

int main(){
    string palabra;
    int posicion1 = 0;

    cout<<"Ingresa una palabra: ";
    cin>>palabra;
    
    int posicion2 = palabra.length();

    if(palabra.at(posicion1) == palabra.at(posicion2 - 1)){
        
        cout<<"La primera letra es igual a la ultima."<<endl;
    }else{

        cout<<"La primera letra es diferente a la ultima."<<endl;
    }

    return 0;
}