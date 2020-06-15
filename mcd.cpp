#include <iostream>
#include <cmath>

using namespace std;

int mcd(int a, int b){ 

    if(b==0){
        return a;

    }else if(a==0){
        return b;

    }else if(b<a){
    return mcd(b, a%b);

    }else if(a<b){
        return mcd(a, b%a);

    }
}

int main(){
    int x, y;

    cout<<"Ingrese dos numeros para conocer su mcd: "<<endl;
    cin>>x;
    cin>>y;

    do{
        if(x < 0|| y < 0){

            cout<<"Ingresa un numero valido"<<endl;
            cout<<"Ingrese dos numeros para conocer su mcd: "<<endl;
            cin>>x;
            cin>>y;

        }else{
            break;
        }
        
    }while(x >= 0 && y >= 0);

    cout<<"El mcd de "<<x<<" y "<<y<<" es: "<<mcd(x, y)<<endl;

return 0;
}