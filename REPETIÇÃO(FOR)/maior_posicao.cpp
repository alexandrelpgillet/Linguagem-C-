#include <iostream>
using namespace std;
int main(){

int num , maior , posicao;
maior = 0;

    for(int x=1 , y=100 ; x<=y ; x++ ){

        cin>>num;
        

        if(num>maior){
            maior= num;
            posicao = x;
            
        }

        
    }

    cout<<maior<<endl;
    cout<<posicao<<endl;

    
}