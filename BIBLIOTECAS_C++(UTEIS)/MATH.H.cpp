#include <iostream>
#include <math.h>
//funções trigonométricas, hiperbólicas, logaritmos,potência e arredondamentos//
using namespace std;

int main(){
    
    float A;
    double arredondar_baixo , arredondar_cima , raiz_quadrada , potencia , seno , cosseno , tangente , logartimo_natural, logaritmo_base10 ;  
    cin>>A;
    
    arredondar_baixo = floor(A);
    arredondar_cima = ceil(A);
    raiz_quadrada = sqrt(A);
    potencia = pow(A , 2);
    seno = sin(A);
    cosseno = cos(A);
    tangente = tan(A);
    logartimo_natural = log(A);
    logaritmo_base10 = log10(A);
     
    cout<<"Arredondamento Baixo = "<<arredondar_baixo<<endl; 
    cout<<"Arredondamento cima = "<<arredondar_cima<<endl; 
    cout<<"Raiz quadrada = "<<raiz_quadrada<<endl; 
    cout<<"Potencia elevada ao quadrado ="<<potencia<<endl; 
    cout<<"Seno = "<<seno<<endl; 
    cout<<"Cosseno = "<<cosseno<<endl; 
    cout<<"Tangente = "<<tangente<<endl; 
    cout<<"Logaritmo natural = "<<logartimo_natural<<endl; 
    cout<<"Logaritmo base 10 ="<<logaritmo_base10<<endl; 

return 0;

}