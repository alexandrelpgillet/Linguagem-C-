#include <iostream>
using namespace std;
int main(){

    int cpf1 , cpf2, cpf3 , cpf4 , d1 , d2 , d3 , d4 ,d5 ,d6 ,d7, d8 , d9, d10 , d11 , T , teste , teste2;
    char n;

    while(cin>>cpf1>>n>>cpf2>>n>>cpf3>>n>>cpf4)
    {
    d1 = cpf1/100;
    d2 = cpf1%100/10;
    d3 = cpf1%100%10;
    
    d4 = cpf2/100;
    d5 = cpf2%100/10;
    d6 = cpf2%100%10;
    
    d7 = cpf3/100;
    d8 = cpf3%100/10;
    d9 = cpf3%100%10;
    
    d10 = cpf4/10;
    d11 = cpf4%10;
    
    T = d1+d2+d3+d4+d5+d6+d7+d8+d9+d10+d11;
    
    
        
        teste = d1*1 + d2*2 + d3*3 + d4*4 +d5*5 +d6*6 + d7*7 + d8*8 + d9*9;
        teste = teste%11;
        
        if(teste==10){
            teste=0;
        }
        
        if(teste==d10){
            
             teste2= d1*9+ d2*8+ d3*7+ d4*6+d5*5 +d6*4+ d7*3+ d8*2+ d9*1;
             teste2=teste2%11;
             
             if(teste2==10){
                 teste2 =0;
             }
             
             if(teste2 == d11){
                 cout<<"CPF valido"<<endl;
             }else{
                 cout<<"CPF invalido"<<endl;
             }
            
            
            
        }else{
            cout<<"CPF invalido"<<endl;
        }
    

    }
    


    

}