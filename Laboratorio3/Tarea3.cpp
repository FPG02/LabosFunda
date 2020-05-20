#include <iostream>
#include <math.h>
using namespace std;

int main(){

    float a, b, c, x1, x2, discriminante, Partereal, Parteimaginaria;
    cout << "Introduce los numeros de a, b y c: ";
    cin >> a >> b >> c;
    discriminante = pow(b,2) - 4*a*c;
    
    if (discriminante > 0) {
        x1 = (-b + sqrt(discriminante)) / (2*a);
        x2 = (-b - sqrt(discriminante)) / (2*a);
        cout << "Las raices perteneces a los Reales y son diferentes." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (discriminante == 0) {
        cout << "Las raices pertenecen a los Reales y son iguales." << endl;
        x1 = (-b + sqrt(discriminante)) / (2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        Partereal = -b/(2*a);
        Parteimaginaria =sqrt(-discriminante)/(2*a);
        cout << "Las raices son complejas y diferentes."  << endl;
        cout << "x1 = " << Partereal << "+" << Parteimaginaria << "i" << endl;
        cout << "x2 = " << Partereal << "-" << Parteimaginaria << "i" << endl;
    }

    return 0;
}