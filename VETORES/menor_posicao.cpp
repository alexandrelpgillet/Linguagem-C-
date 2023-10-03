#include <iostream> 
using namespace std;
int main(){

    int N , i , menor , position , valor1 , valor[1000]={};
    
    i=0;
    cin>>N;

    
    menor = 1000000000;

    for(N, i ; i<N ; i=i+1){

        cin>>valor[i];

        if(valor[i]<menor){
            menor = valor[i];
            position = i;

        }

    }

    cout<<"Menor valor: "<<menor<<endl;
    cout<<"Posicao: "<<position<<endl;

    



}