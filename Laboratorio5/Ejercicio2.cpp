#include <iostream>
using namespace std;

int main(){
    int num=0;

    cout<<"Ingrese un numero para saber si es par o impar: ";
    cin>>num;

    if(num%2==0){
        cout<<"El numero "<<num<<" es par.";

        }else{
            cout<<"El numero "<<num<<" es impar.";
        }

return 0;
}