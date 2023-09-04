#include <iostream>
using namespace std;
int main(){

    int repeticao , pessoas , altura_min , altura_max , altura , visitantes_validos ;

    visitantes_validos=0;    
    repeticao = 0;

    cin>>pessoas>>altura_min>>altura_max;

    for(pessoas , repeticao , altura_min , altura_max ; repeticao<pessoas ; repeticao++){

        cin>>altura;
        if(altura>=altura_min && altura<=altura_max){
            visitantes_validos+=1;

        }
        
    }

    cout<<++visitantes_validos-1<<endl;
}