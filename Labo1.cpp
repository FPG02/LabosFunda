#include <iostream>


using namespace std;

int main(){
    string nombre = "";
    float budget = 10000, retiro = 0;
    cout<<"Ingresa tu nombre: ";
    cin>> nombre;
    cout<<"\nCuanto quieres retirar: $";
    cin>>retiro;

    cout<<"Has retirado: $"<<retiro <<endl;
    budget -= retiro;
    cout<<"Tu saldo actual es: $"<<budget;
}