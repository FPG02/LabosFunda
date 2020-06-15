#include <iostream>
using namespace std;
#include <ctime>

int bisiesto(int a){
    int b = a;
    bool e;

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

int main(){
    int x, y, z, c, d, f, g;
    int dias;

    srand((unsigned)time(NULL));
    x = rand()%(2020)+1;
    c = x + (rand()%2020);
    y = rand()%(12)+1;
    g = bisiesto(c);

    if(y==1){
        dias = rand()%(31)+1;

    }else if(y==2 && g==false){
        dias = rand()%(28)+1;

    }else if(y==2 && g==true){
        dias = rand()%(29)+1;

    }else if(y==3){
        dias = rand()%(31)+1;
        
    }else if(y==4){
        dias = rand()%(30)+1;
        
    }else if(y==5){
        dias = rand()%(31)+1;
        
    }else if(y==6){
        dias = rand()%(30)+1;
        
    }else if(y==7){
        dias = rand()%(31)+1;
        
    }else if(y==8){
        dias = rand()%(31)+1;
        
    }else if(y==9){
        dias = rand()%(30)+1;
        
    }else if(y==10){
        dias = rand()%(31)+1;
        
    }else if(y==11){
        dias = rand()%(30)+1;
        
    }else if(y==12){
        dias = rand()%(30)+1;
        
    }
    
    cout<<dias<<"/"<<y<<"/"<<c<<endl;
    int h = dias + 1;

    if(h>31 && y==1){
        h=1;
        y++;

  }else if(h>=28 && y==2 && g==false){
        h=1;
        y++;

  }else if(h>=29 && y==2 && g==true){
        h=1;
        y++;

  }else if(h>=31 && y==3){
        h=1;
        y++;

  }else if(h>=30 && y==4){
        h=1;
        y++;

  }else if(h>=31 && y==5){
        h=1;
        y++;

  }else if(h>30 && y==6){
        h=1;
        y++;

  }else if(h>=31 && y==7){
        h=1;
        y++;

  }else if(h>=31 && y==8){
        h=1;
        y++;
    
  }else if(h>=30 && y==9){
        h=1;
        y++;
    
  }else if(h>=31 && y==10){
        h=1;
        y++;
    
  }else if(h>=30 && y==11){
        h=1;
        y++;
    
  }else if(h>=31 && y==12){
        h=1;
        y=1;
        c++;
  }
  
  cout<<"El dia siguiente es: "<<h<<"/"<<y<<"/"<<c<<endl;

return 0;
}