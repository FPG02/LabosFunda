#include <iostream>
using namespace std;

int main(){

    int num=0;

    do{
        cout<<"1- Rojo"<<endl;
        cout<<"2- Azul"<<endl;
        cout<<"3- Verde"<<endl;
        cout<<"4- Blanco"<<endl;
        cout<<"5- Negro"<<endl;
        cout<<"Escoge el numero del color que prefieras: ";
        cin>>num;
        
        if (num==1){
        cout<<"Has escogido el color rojo."<<endl;
        cout<<"¡Felicidades! has ganado $20."<<endl;
        
        
        }else if(num==2){
        cout<<"Has escogido el color azul."<<endl;
        cout<<"¡Felicidades! has ganado $5."<<endl;

        
        }else if(num==3){
        cout<<"Has escogido el color verde."<<endl;
        cout<<"Has ganado $0, lo sentimos suerte en la proxima :("<<endl;

        
        }else if(num==4){
        cout<<"Has escogido el color blanco."<<endl;
        cout<<"¡Felicidades! has ganado $15."<<endl;

        
        }else if(num==5){
        cout<<"Has escogido el color negro."<<endl;
        cout<<"¡Felicidades! has ganado $30."<<endl;

        
        }else if(6 <= num){
        cout<<"¡Error!"<<endl;
        cout<<"Intenta una vez mas ingresando un numero entre 1 y 5."<<endl;

        
        }else if(num <= 0){
        cout<<"¡Error!"<<endl;
        cout<<"Intenta una vez mas ingresando un numero entre 1 y 5."<<endl;

        }
    }while(num!=1 ^ num!=2 ^ num!=3 ^ num!=4 ^ num!=5);

    cout<<"Gracias por jugar :D"<<endl;

return 0;
}