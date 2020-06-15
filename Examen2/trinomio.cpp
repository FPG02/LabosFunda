#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int a, b, c;

    cout<<"Ingrese las cantidades de a, b y c en la forma ax2 + bx + c: ";
    cin>>a;
    cin>>b;
    cin>>c;

    int c1 = a * c;
    int c2 = sqrt(c1);
    int comprobacion = 2*(a*c2);

    if(comprobacion==b){

        cout<<"El trinomio es cuadrado perfecto";

    }else{

        cout<<"El trinomio no es cuadrado perfecto.";
    }
}