#include <iostream>
using namespace std;
int main(){
    int hora_inicial , minuto_inicial , hora_final , minuto_final , duracao_horas , duracao_minutos, duracao_total ;
    
    cin>>hora_inicial>>minuto_inicial>>hora_final>>minuto_final;
    
    if (hora_inicial == hora_final && minuto_final == minuto_inicial ){
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
    }else{

        if (hora_final>hora_inicial){
            
            
            if(minuto_final>minuto_inicial){
                duracao_horas=hora_final - hora_inicial;
                duracao_minutos= minuto_final - minuto_inicial;
                cout<<"O JOGO DUROU "<<duracao_horas<<" HORA(S) E "<<duracao_minutos<<" MINUTO(S)"<<endl; 

            }else{

                if (minuto_final<minuto_inicial){
                    duracao_total= ((hora_final*60)+minuto_final) - ((hora_inicial*60)+minuto_inicial);
                    duracao_horas = duracao_total/60;
                    duracao_minutos = duracao_total%60;
                    cout<<"O JOGO DUROU "<<duracao_horas<<" HORA(S) E "<<duracao_minutos<<" MINUTO(S)"<<endl;

                }else{
                    if(minuto_inicial == minuto_final){
                        duracao_horas = hora_final - hora_inicial;
                        cout<<"O JOGO DUROU "<<duracao_horas<<" HORA(S) E 0 MINUTO(S)"<<endl;
                    }
                }
            }
        }else{

            if(hora_final<hora_inicial){
                
                if(minuto_final>minuto_inicial){
                    duracao_total = ((((hora_final+22)*60)+minuto_final)-((hora_inicial*60)+minuto_inicial));
                    
                    duracao_horas = (duracao_total)/60;
                    duracao_minutos = (duracao_total)%60;

                    cout<<"O JOGO DUROU "<<duracao_horas<<" HORA(S) E "<<duracao_minutos<<" MINUTO(S)"<<endl;
                
                }else{
                    if(minuto_final<minuto_inicial){
                        duracao_total = (((hora_final+24))*60+minuto_final) - ((hora_inicial*60)+minuto_inicial);

                        duracao_horas = duracao_total/60;
                        duracao_minutos = duracao_total%60;

                        cout<<"O JOGO DUROU "<<duracao_horas<<" HORA(S) E "<<duracao_minutos<<" MINUTO(S)"<<endl;



                    }else{

                        if(minuto_final == minuto_inicial){
                            duracao_horas = (hora_final+24)- hora_inicial;
                            cout<<"O JOGO DUROU "<<duracao_horas<<" HORA(S) E 0 MINUTO(S)"<<endl; 
                        }
                    }
                }


            }else{

                if(hora_final == hora_inicial){
                    
                    if(minuto_final>minuto_inicial){
                    duracao_minutos = minuto_final- minuto_inicial;
                    cout<<"O JOGO DUROU 0 HORA(S) E "<<duracao_minutos<<" MINUTO(S)"<<endl;
                    
                    }else{
                        if(minuto_final<minuto_inicial){
                            duracao_total = (((hora_final+24)*60)+minuto_final) - ((hora_inicial*60)+minuto_inicial);

                            duracao_horas = duracao_total/60;
                            duracao_minutos = duracao_total%60;

                            cout<<"O JOGO DUROU "<<duracao_horas<<" HORA(S) E "<<duracao_minutos<<" MINUTO(S)"<<endl;
                        }
                    }
                }
            }
        }

    }

}