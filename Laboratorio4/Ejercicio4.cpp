#include <iostream>
#include <string>
using namespace std;

int main(){

    string palabra;

    cout<<"Ingresa una palabra: ";
    getline(cin,palabra);

    if(palabra.length() > 10 && palabra.length()%2 == 0){
        cout<<"La palabra "<<palabra<<" es mayor a 10 caracteres y es par."<<endl;

    }else if (palabra.length() > 10 && palabra.length()%2 !=0){
        cout<<"La palabra "<<palabra<<" es mayor a 10 caracteres y es impar."<<endl;

    }else if(palabra.length() == 10){
        cout<<"La palabra "<<palabra<<" es igual a 10 caracteres y es par."<<endl;

    }else if(palabra.length() < 10 && palabra.length()%2 == 0){
        cout<<"La palabra "<<palabra<<" es menor a 10 caracteres y es par."<<endl;

    }else if(palabra.length() < 10 && palabra.length()%2 !=0){
        cout<<"La palabra "<<palabra<<" es menor a 10 caracteres y es impar."<<endl;
    }

    return 0;
}