#include <iostream>
using namespace std;
int main(){

    int N ,N2 , sequencia;
    sequencia = 0;
    N2 = 0;
    cin>>N;

    while(N2<N){

        N2+=1;
        sequencia+=1;

        if(sequencia ==1){

        cout<<sequencia<<" ";
        cout<<sequencia+1;

        if(sequencia+=2){
            cout<<" "<<sequencia<<" PUM"<<endl;
        }
        }else{

            cout<<sequencia+1<<" ";
            cout<<sequencia+2;

            if(sequencia+=3){
                cout<<" "<<sequencia<<" PUM"<<endl;
            }
        }

       

    }

    
}