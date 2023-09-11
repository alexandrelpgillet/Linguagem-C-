#include <iostream>
using namespace std;
int main(){

     long long int M , N , fatorialN , fatorialM;

    while(cin>>M>>N){
    
    fatorialM =1;
    fatorialN=1;

        if(M ==0){
            M=1;
        }

        if(N ==0){
            N=1;
        }

        for(M ; M >0 ; M--){
            //cout<<M<<endl;
            fatorialM*=M;

        }

        for(N ; N>0 ; N--){
            //cout<<N<<endl;
            fatorialN*=N;

        }

        cout<<fatorialM+fatorialN<<endl;
    }
}