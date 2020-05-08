#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float radius, area;

    cout <<"Introduce el radio del circulo: ",
    cin >> radius;
    area = 3.1416 * pow(radius,2);
    cout<<"El area del circulo es: "<< area <<endl;

    float perimeter = 2* 3.1416 * radius;
    cout<< "El perimetro del circulo es: " <<perimeter <<endl;

    return 0;
}