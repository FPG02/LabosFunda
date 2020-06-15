#include <iostream>
#include <math.h>
using namespace std;

int main(){

    float num1, num2, num3, num4, num5, media;

    cout<<"Ingresa 5 numeros para obtener la media aritmetica de estos: ";
    cin>>num1;
    cin>>num2;
    cin>>num3;
    cin>>num4;
    cin>>num5;

    media = (num1 + num2 + num3 + num4 + num5)/5;
    
    cout<<"La media aritmetica es: "<<media<<endl;

    return 0;
}