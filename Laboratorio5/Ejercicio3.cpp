#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float num=0;
    
    cout<<"Ingresa un numero para identificar si es postivo, negativo o 0: ";
    cin>>num;
    
    if(num == 0){
    cout<<"El numero "<<num<<" es neutro.";

    }else if(num > 0){

        cout<<"El numero "<<num<<" es positivo.";

    }else{

        cout<<"El numero "<<num<<" es negativo.";

    }
    return 0;
}
