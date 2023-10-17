#include <iostream>
using namespace std;

int main(){

    int N , i , i2 , i3 , linha , coluna, quant;
    
    cin>>N;

    int F[N][N];
    int V[2*N];
    
    quant=0;

    for(i=0 ; i<N ; i++){
        for(i2=0 ; i2<N ; i2++){
            cin>>F[i][i2];
        }
    }

    for(i=0 ; i<2*N ; i++){
        cin>>linha>>coluna;
        V[i]=F[linha-1][coluna-1];
        
    }

    i3=1;

    for(i=0 ; i<2*N-1 ; i++){
        
        for(i2=i3 ; i2<2*N ; i2++){
            if(V[i2]!=0){
                if(V[i]==V[i2]){
                    V[i2]=0;
                }
            }
        }
        i3++;

        
    }

    for(i=0 ; i<2*N ; i++){
        if(V[i]!=0){
            quant++;
        }
    }
    
    cout<<quant<<endl;
    

    
}