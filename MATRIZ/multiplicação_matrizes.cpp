#include <iostream>
using namespace std;

int main(){

    int64_t N , P , Q , R , S , X , Y , I, J , i , total;

    cin>>N;

     int A[1][N] , B[N][1] , AV[N] , BV[N];
    
    cin>>P>>Q>>R>>S>>X>>Y;
    cin>>I>>J;
    
    I=I-1;
    J=J-1;

    for(i=0 ; i<N ; i++){
        A[0][i]= (P*(I+1) + Q * (i+1)) %X;
        AV[i]=A[0][i];
        
    }

    for(i=0 ; i<N ; i++){
        B[i][0] = (R*(i+1) + S * (J+1)) % Y;
        BV[i]=B[i][0];
    }

    for(i=0, total=0 ; i<N ; i++){
        total+=AV[i]*BV[i];

    }

    cout<<total<<endl;

}