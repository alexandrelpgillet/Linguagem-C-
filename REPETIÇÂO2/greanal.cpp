#include <iostream>
using namespace std;

int main(){
    
    int vezes , Inter , Gremio , N , grenais , inter_vitoria , gremio_vitoria , empate;


    empate = 0;
    inter_vitoria=0;
    gremio_vitoria=0;
    grenais =0;
    vezes = 0;


    while(vezes<1 ){
       
        cin>>Inter>>Gremio;
        grenais++;

        if(Inter>Gremio){
            inter_vitoria++;
        }else{
            if(Gremio>Inter){
                gremio_vitoria++;
            }else{
                empate++;
                
            }
        }

        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>N;

        if(N== 2){
            vezes+=1;
            cout<<++grenais-1<<" grenais"<<endl;
            cout<<"Inter:"<<inter_vitoria<<endl;
            cout<<"Gremio:"<<gremio_vitoria<<endl;
            cout<<"Empates:"<<empate<<endl;
            
            if(inter_vitoria>gremio_vitoria){
                cout<<"Inter venceu mais"<<endl;
            }else{
                if(gremio_vitoria>inter_vitoria){
                    cout<<"Gremio venceu mais"<<endl;
                }else{
                    cout<<"Não ouve vencedor"<<endl;
                }
            }
        }
    }

}