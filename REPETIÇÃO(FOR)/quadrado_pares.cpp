#include <iostream>
using namespace std;
int main(){
    int N, potencia;
    cin>>N;

    //if(N%2 == 0){
        
        for(potencia=2; potencia<=N ; potencia+=2){
            cout<<potencia<<"^2 = "<<potencia*potencia<<endl;
        }
    //}

    /*
     if(N%2 != 0){
         for(potencia=2; potencia<=N ; potencia+=2){
            cout<<potencia<<"^2 = "<<potencia*potencia<<endl;
        }

    }?*/
}
