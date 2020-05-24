#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float divisible; 
    int num1 = 0, num2 = 0;

    cout<<"Ingresa el dividendo: ";
    cin>>num1;

    cout<<"Ingresa el numero divisor: ";
    cin>>num2;

    if(num2 == 0){

        cout<<num1<<" no se puede dividir entre "<<num2;
    }

    divisible = num1 % num2;

    if(divisible==0){

        cout<<num1<<" si es divisible con "<<num2;
    }

    else if(divisible!=0){

        cout<<num1<<" no es divisible con "<<num2;
    }

    return 0;
}