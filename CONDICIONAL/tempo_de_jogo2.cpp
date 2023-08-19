#include <iostream>
using namespace std;

int main (){
    
    int inicio_hora , inicio_minutos , fim_hora , fim_minutos, duracao_horas , duracao_minutos, duracao_total;
    cin>>inicio_hora>>inicio_minutos>>fim_hora>>fim_minutos;

    if(inicio_hora == fim_hora){
        if(inicio_minutos == fim_minutos){
            cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
        
        }

        if(inicio_minutos< fim_minutos){
            duracao_minutos= fim_minutos- inicio_minutos;
            cout<<"O JOGO DUROU 0 HORA(S) E "<<duracao_minutos<<" MINUTO(S)"<<endl;
        }

        
    }else{

        if(inicio_hora < fim_hora){
            if(inicio_minutos == fim_minutos){
                
                duracao_horas= fim_hora -  inicio_hora;
                cout<<"O JOGO DUROU "<<duracao_horas<<" HORA(S) E 0 MINUTO(S)"<<endl;
            }

            

            if(inicio_minutos<fim_minutos){
                duracao_horas = fim_hora - inicio_hora;
                duracao_minutos= fim_minutos - inicio_minutos;
                cout<<"O JOGO DUROU "<<duracao_horas<<" HORA(S) E "<<duracao_minutos<<" MINUTO(S)"<<endl;
            }

            if(inicio_minutos>fim_minutos){
                duracao_total=  (((fim_hora*60)+fim_minutos) - ((inicio_hora*60)+inicio_minutos));
                duracao_horas = duracao_total/60;
                duracao_minutos = duracao_total%60;
                cout<<"O JOGO DUROU "<<duracao_horas<< " HORA(S) E "<<duracao_minutos<<" MINUTO(S)"<<endl;
            }

        }else{
            
            
            
            

            
            if(inicio_hora > fim_hora){
                if(inicio_minutos==fim_minutos){
                    duracao_horas = (fim_hora +24) - inicio_hora;
                    cout<<"O JOGO DUROU "<<duracao_horas<< " HORA(S) E 0 MINUTO(S)"<<endl;
                }
                

                if(inicio_minutos>fim_minutos && inicio_hora ==24){
                    
                    duracao_total = ((fim_hora*60)+fim_minutos)-inicio_minutos;
                    duracao_horas= duracao_total/60;
                    duracao_minutos= duracao_total%60;
                    cout<<"O JOGO DUROU "<<duracao_horas<<" HORA(S) E "<<duracao_minutos<<" MINUTO(S)"<<endl;


                }else{

                if(inicio_minutos<fim_minutos && inicio_hora ==24){
                    duracao_horas = fim_hora;
                    duracao_minutos = fim_minutos - inicio_minutos;
                    cout<<"O JOGO DUROU "<<duracao_horas<<" HORA(S) E "<<duracao_minutos<<" MINUTO(S)"<<endl;


                }else{
                if(inicio_minutos > fim_minutos){
                    duracao_total= (inicio_hora*60 + inicio_minutos)+ (fim_hora*60 +fim_minutos);
                    duracao_horas = duracao_total/60;
                    duracao_minutos = duracao_total%60;
                    cout<<"O JOGO DUROU "<<duracao_horas<<" HORA(S) E "<<duracao_minutos<<" MINUTO(S)"<<endl;
                }

                if(inicio_minutos < fim_minutos){
                    duracao_total =  ((fim_hora+24)*60) - (inicio_hora*60) +(fim_minutos-inicio_minutos);
                    duracao_horas= duracao_total/60;
                    duracao_minutos= duracao_total%60;
                    cout<<"O JOGO DUROU "<<duracao_horas<<" HORA(S) E "<<duracao_minutos<<" MINUTO(S)"<<endl;
                }
                }

                }

                
            }
        }
    }



}