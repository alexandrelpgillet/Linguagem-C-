#include <iostream>
using namespace std;
int main(){

  string s;
  int dia_inicial , dia_final , hora_inicial , hora_final , minuto_inicial , minuto_final , segundo_inicial , segundo_final, total , horas , minutos , segundos , intervalo;
  
  cin>> s >> dia_inicial;
  cin>> hora_inicial >> s >> minuto_inicial >> s >> segundo_inicial;
  cin >> s >> dia_final;
  cin>> hora_final >> s >> minuto_final >> s >> segundo_final;






  if(dia_inicial == dia_final){
    
    total= (hora_final*3600 + minuto_final*60 + segundo_final) - (hora_inicial*3600+minuto_inicial*60+segundo_inicial);
    
    
    
    
    
    cout<<"0 dia(s)"<<endl;
    cout<<((hora_final*3600 + minuto_final*60 + segundo_final) - (hora_inicial*3600+minuto_inicial*60+segundo_inicial))/3600<<" hora(s)"<<endl;
    cout<<(((hora_final*3600 + minuto_final*60 + segundo_final) - (hora_inicial*3600+minuto_inicial*60+segundo_inicial))%3600)/60<<" minuto(s)"<<endl;
    cout<<(((hora_final*3600 + minuto_final*60 + segundo_final) - (hora_inicial*3600+minuto_inicial*60+segundo_inicial))%3600)%60<<" segundo(s)"<<endl;
   
    


  }else{

    if(dia_final>dia_inicial){
      
      intervalo = dia_final - dia_inicial;
      total = ((hora_final)*3600 + minuto_final*60 + segundo_final+intervalo*86400) - (hora_inicial*3600+minuto_inicial*60+segundo_inicial);
      cout<<total/86400<<" dia(s)"<<endl;
      cout<<(total%86400)/3600<<" hora(s)"<<endl;
      cout<<((total%86400)%3600)/60<<" minuto(s)"<<endl;
      cout<<((total%86400)%3600)%60<<" segundo(s)"<<endl;

    }
  }



}