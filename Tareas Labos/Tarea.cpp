#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, i;
    float num[100], sum=0.0, average;
    cout<< "Ingresa la cantidad de numeros que deseas promediar: ";
    cin>> n;

    while (n > 100 || n <= 0){

        cout <<"Error, ingresa un numero en el rango de 1 a 3." <<endl;
        cout <<"Ingresa el numero otra vez: ";
        cin >> n;
    }

    for(i= 0; i < n; ++i){
        cout<< i + 1 << ". Ingresa el numero: ";
        cin>> num[i];
        sum += num[i];
    }
average = sum / n;
cout<< "Promedio= " <<average;

return 0;
}