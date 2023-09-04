#include <iostream>
#include <iomanip>
using namespace std;
int main(){

    int competidores , vezes ;
    
    double dificuldade , N1 , N2 , N3 , N4 , N5 , N6 , N7 , maior , menor;
    
    string nome;
    vezes = 0;

    cin>>competidores;
    
    for(competidores , vezes ; vezes<competidores  ; vezes++ ){


    maior = 0;
    menor = 0;

        cin>>nome;
        cin>>dificuldade;
        cin>>N1>>N2>>N3>>N4>>N5>>N6>>N7;

        maior = N1;
        menor = maior;

        if(N1>=maior){
            maior = N1;
        }
        
    
        if(N2>=maior){
            maior = N2;
        }
        
        if(N3>=maior){
            maior = N3;
        }
        
        if(N4>=maior){
             maior = N4;
        }
                    
        if(N5>=maior){
            maior = N5;
        }

        if(N6>=maior){
             maior = N6;
        }

        if(N7>=maior){
            maior = N7;
        }
                
            
        if(N2<menor){
            menor = N2;
        }
            
        if(N3<menor){
            menor = N3;
        }
                
        if(N4<menor){
            menor = N4;
        }
                    
        if(N5<menor){
            menor = N5;
        }

        if(N6<menor){
            menor = N6;
        }

        if(N7<menor){
            menor = N7;
        }

                
            
        
        cout<<fixed<<setprecision(2);
        cout<<nome<<" "<<dificuldade*(N1+N2+N3+N4+N5+N6+N7-maior-menor)<<endl;

        
    }
}