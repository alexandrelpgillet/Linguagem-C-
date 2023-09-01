#include <iostream>
using namespace std;
int main(){
    int num , repeticao , par , impar , positivo , negativo;
    positivo=0;
    negativo=0;
    par=0;
    impar=0;
    repeticao=0;

    cin>>num;
    for(num ; repeticao<5 ; repeticao+=1 , cin>>num){
        if(num%2 == 0){
            par+=1;
        }else{
            if(num%2 != 0){
                impar+=1;
            }
        }

        if(num>0){
            positivo+=1;

        }else{
            if(num<0){
                negativo+=1;
            }
        }

        

    }
    cout<<par<<" valor(es) par(es)"<<endl;
    cout<<impar<<" valor(es) impar(es)"<<endl;

    cout<<positivo<<" valor(es) positivo(s)"<<endl;
    cout<<negativo<<" valor(es) negativo(s)"<<endl;
}