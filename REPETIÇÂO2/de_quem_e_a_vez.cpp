#include <iostream>
using namespace std;
int main(){
    
    int N , N2 , num1 , num2;
    string nome1 , nome2 , escolha1 , escolha2;
    N2=0;
    cin>>N;

    for(N , N2 ; N2<N ; N2++){

        cin>>nome1>>escolha1>>nome2>>escolha2;
        cin>>num1>>num2;

        if(escolha1 == "PAR" && (num1+num2)%2 == 0){
            cout<<nome1<<endl;
        }else{

            if(escolha1 =="IMPAR" && (num1+num2)%2 != 0){
                cout<<nome1<<endl;
            }
        }

        if(escolha2 == "PAR" && (num1+num2)%2 == 0){
            cout<<nome2<<endl;
        }else{

            if(escolha2 =="IMPAR" && (num1+num2)%2 != 0){
                cout<<nome2<<endl;
            }
        }




    }
}