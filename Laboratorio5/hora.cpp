#include <iostream>
#include <time.h>

using namespace std;

int main(){
  time_t tSac = time(NULL);
  struct tm* tmP = localtime(&tSac);

  int s=tmP->tm_sec + 1, m=tmP->tm_min, h=tmP->tm_hour;
    
  cout<<"hh:mm:ss "<<tmP->tm_hour<<":"<<tmP->tm_min<<":"<<tmP->tm_sec<<endl;

  if(s==60){
    s=0;
    m++;
    cout<<"hh:mm:ss +1s "<<h<<":"<<m<<":"<<s<<endl;

  }else if(s==60 && m==60){
    s=0;
    m=0;
    h++;
    cout<<"hh:mm:ss +1s "<<h<<":"<<m<<":"<<s<<endl;

  }else if(s==60 && m==60 && h==24){
    s=0;
    m=0;
    h=0;
    cout<<"hh:mm:ss +1s "<<h<<":"<<m<<":"<<s<<endl;
  }

  return 0;
}