#include <iostream>
#include <math.h>

using namespace std;

int main(){
    
    string variable1; 
    float variable2, variable3;

    cout<<"Ingrese nombre del producto: ";
    getline (cin,variable1);

    cout<<"Ingrese el precio del producto: $";
    cin>>variable2;

    cout<<"Ingrese la cantidad comprada del producto: $";
    cin>>variable3;

    float multiplies = variable2*variable3;
    cout<<"Total de dinero gastado: $"<<multiplies;
    
    return 0;
}