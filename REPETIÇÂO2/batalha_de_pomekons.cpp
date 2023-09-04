#include <iostream>
using namespace std;
int main(){
    
    int N , N2 , bonus , ataque_dabriel , defesa_dabriel , level_dabriel ,valorgolpe_dabriel , valorgolpe_guarte , ataque_guarte, defesa_guarte , level_guarte;
    
    N2=0;
    cin>>N;

    for(N , N2 ; N2<N ; N2++ ){

        cin>>bonus;
        cin>>ataque_dabriel>>defesa_dabriel>>level_dabriel;
        cin>>ataque_guarte>>defesa_guarte>>level_guarte;

        if(level_dabriel %2 == 0 && level_guarte %2 == 0){
            
            valorgolpe_dabriel = (ataque_dabriel+defesa_dabriel)/2 + bonus;
            
            valorgolpe_guarte = (ataque_guarte+defesa_guarte)/2 +bonus;


        }else{

            if(level_dabriel %2 == 0){

                valorgolpe_dabriel = (ataque_dabriel+defesa_dabriel)/2 + bonus;
            
            }else{
                valorgolpe_dabriel = (ataque_dabriel+defesa_dabriel)/2;
            }
            
            if(level_guarte %2 == 0){
            valorgolpe_guarte = (ataque_guarte+defesa_guarte)/2 +bonus;


            }else{
                valorgolpe_guarte = (ataque_guarte+defesa_guarte)/2;

            }
            
        
        

        }

        if(valorgolpe_dabriel == valorgolpe_guarte){
            cout<<"Empate"<<endl;
        
        }else{

            if(valorgolpe_dabriel>valorgolpe_guarte){
                cout<<"Dabriel"<<endl;
            }else{
                
                if(valorgolpe_guarte>valorgolpe_dabriel){
                    cout<<"Guarte"<<endl;
                }
            }
        }

        
}

}