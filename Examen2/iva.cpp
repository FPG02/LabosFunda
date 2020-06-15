#include <iostream>
using namespace std;

int main(){
    
    int num=0;
    float num2=0;

    do{
        cout<<"1- El Salvador"<<endl;
        cout<<"2- Guatemala"<<endl;
        cout<<"3- Honduras"<<endl;
        cout<<"4- Espana"<<endl;
        cout<<"Ingresa el numero de un pais: ";
        cin>>num;


        if (num==1){
        cout<<"Has seleccionado El Salvador"<<endl;
        cout<<"Por favor ingresa la cantidad de dinero que necesitas: $ ";
        cin>>num2;
        float num3 = num2*0.13;
        cout<<"La cantidad a cancelar por IVA es: "<<num3<<endl;
        float num4 = num3 + num2;
        cout<<"Total: $ "<<num4<<endl;
        break;
        

        }else if(num==2){
        cout<<"Has seleccionado Guatemala"<<endl;
        cout<<"Por favor ingresa la cantidad de dinero que necesitas: $ ";
        cin>>num2;
        float num3 = num2*0.09;
        cout<<"La cantidad a cancelar por IVA es: "<<num3<<endl;
        float num4 = num3 + num2;
        cout<<"Total: $ "<<num4<<endl;
        break;
        

        }else if(num==3){
        cout<<"Has seleccionado Honduras"<<endl;
        cout<<"Por favor ingresa la cantidad de dinero que necesitas: $ ";
        cin>>num2;
        float num3 = num2*0.15;
        cout<<"La cantidad a cancelar por IVA es: "<<num3<<endl;
        float num4 = num3 + num2;
        cout<<"Total: $ "<<num4<<endl;
        break;
        

        }else if(num==4){
        cout<<"Has seleccionado Espana"<<endl;
        cout<<"Por favor ingresa la cantidad de dinero que necesitas: $ ";
        cin>>num2;
        float num3 = num2*0.20;
        cout<<"La cantidad a cancelar por IVA es: "<<num3<<endl;
        float num4 = num3 + num2;
        cout<<"Total: $ "<<num4<<endl;
        break;


        }else if(5 <= num){
        cout<<"¡Error!"<<endl;
        cout<<"Solo puedes ingresar un numero de los 4 paises."<<endl;


        }else if(num <= 0){
        cout<<"¡Error!"<<endl;
        cout<<"Solo puedes ingresar un numero de los 4 paises."<<endl;

        }
    }while(num <= 5 && 0 <= num);

    cout<<"Gracias por usar nuestros servicios, vuelva pronto ;)"<<endl;

return 0;
}