#include <iostream> 
using namespace std;
int main(){
    int   repeticao , entrada  , contador;
    float  maior , maior2 , menor, nota;
    string matricula , maior_m ;
    cin>>repeticao;
    contador=0;
    entrada =0;
    maior = 0;
    


    for(repeticao , entrada  ; entrada<repeticao ; entrada++){
        
       cin>>matricula>>nota ;
       
        

        if(nota>maior){
            maior = nota;
            maior_m = matricula;

            if(maior<8){
                maior_m="Minimum note not reached";

            }

             


        }

        
        
       
        
    }

    cout<<maior_m<<endl;
    
    

}