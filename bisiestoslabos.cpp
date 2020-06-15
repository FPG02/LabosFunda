#include <iostream>

using namespace std;

int main(){
    int a, b = a;
    bool e;

    cout<<"Ingresa un año para saber si es bisiesto: "<<endl;
    cin>>a;

    if(a%400 == 0){
        e=true;

    }else if(a%400!=0){
        int b = a;

        if(b%4==0 && b%100!=0){
            e=true;

        }else if(b%4!=0 || b%100==0 || b%100!=0){
            e=false;
        }
    }

    if(e==1){
        cout<<"El año si es bisiesto"<<endl;

    }else if(e==0){
        cout<<"El año no es bisiesto"<<endl;

    }

return 0;
}