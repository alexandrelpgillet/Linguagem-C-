#include <iostream>
using namespace std;
int main (){
  string d1 , d2, separador;
  int dias , total_final , total_inicial  ,dia_inicial , dia_final , hora_inicial , hora_final , minuto_inicial , minuto_final , segundo_inicial , segundo_final;

  cin>>d1>>dia_inicial;
  cin>>hora_inicial>>separador>>minuto_inicial>>separador>>segundo_inicial;
  cin>>d2>>dia_final;
  cin>>hora_final>>separador>>minuto_final>>separador>>segundo_final;

  if(dia_final>dia_inicial){
    dias = dia_final-dia_inicial;
    
    total_final = (((((dias*24)+hora_final)*60)+minuto_final)*60)+segundo_final;
    total_inicial = (((hora_inicial*60)+minuto_inicial)*60)+segundo_inicial;
    
    cout<<((total_final-total_inicial)/3600)/24<<" dia(s)"<<endl;
    cout<<((total_final-total_inicial)/3600)%24<<" hora(s)"<<endl;
    cout<<(((total_final-total_inicial)/3600)%24)/60<<" minuto(s)"<<endl;
    cout<<(((total_final-total_inicial)/3600)%24)%60<<" segundos(s)"<<endl;


  }



}