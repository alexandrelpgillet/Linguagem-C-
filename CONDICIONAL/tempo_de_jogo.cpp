#include <iostream>
using namespace std;

int main(){

    int inicio, fim , duracao;
    
    cin>>inicio>>fim;

    if(inicio == fim){
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
    }else{
        if(inicio>=12 and fim<12){
        duracao= (fim+24) - inicio;
        cout<<"O JOGO DUROU "<<duracao<<" HORA(S)"<<endl;
        }else{
            if(inicio<12 and fim>=12 ){
            duracao= fim - inicio; 
            cout<<"O JOGO DUROU "<< duracao<<" HORA(S)"<<endl;
            }else{
                if(inicio>=12 and fim>12){
                    duracao= fim -inicio;
                    cout<<"O JOGO DUROU "<<duracao <<" HORA(S)"<<endl;

                }else{

                    if(fim>inicio){
                        
                        
                        if(inicio>=0 and fim>=0 ){
                        duracao= fim - inicio;
                        cout<<"O JOGO DUROU "<<duracao <<" HORA(S)"<<endl;
                    } 


                    }else{

                        if(fim<inicio){
                            duracao= inicio - fim ;
                            cout<<"O JOGO DUROU "<<duracao<<" HORA(S)"<<endl;
                        }
                    }



                    
                }
            }    

        }
        
    
   
    }



}