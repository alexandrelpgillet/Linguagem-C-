#include <iostream >
using namespace std;

int main(){
   int inicio, fim, duracao;
   cin>>inicio>>fim;

   if(inicio ==fim){
    cout<<"O JOGO DUROU 24 HORAS(S)"<<endl;

   }else{
    if(inicio=0 and fim>0){
        duracao = fim -inicio;
        cout<<"O JOGO DUROU " <<duracao<< " HORA(S)"<<endl;
    
    }else{
        if(inicio>12 and fim>12){
            duracao= fim - inicio ;
            cout<<"O JOGO DUROU "<<duracao<<"HORA(S)"<<endl;

            }
        }
    }



   }

   

   

