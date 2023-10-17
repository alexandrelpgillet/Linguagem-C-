#include <iostream>
using namespace std;
int main(){
    
    int N , M, i , i2;

    while(cin>>N>>M){

        int P[N+2][M+2];

        for(i=0 ; i<N+2 ; i++){
            for(i2=0; i2<M+2 ; i2++){
                P[i][i2]=0;
            }
        }

        for(i=1 ; i<N+1 ; i++){
            for(i2=1 ; i2<M+1 ; i2++){
                cin>>P[i][i2];
            }
        }

        for(i=1 ; i<N+1; i++){
            for(i2=1 ; i2<M+1; i2++){
                if(P[i][i2]!=0){
                    cout<<9;
                }else{
                    cout<<P[i-1][i2]+P[i+1][i2]+P[i][i2-1]+P[i][i2+1];
                }
            }
            cout<<endl;
        }

    }
}