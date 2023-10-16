#include <iostream>
using namespace std;

int main(){

  int N , i , i2 , i3 , i4 , D;
  
  while(cin>>N){

    int M[N][N];

    for(i=0; i<N;i++){
      for(i2=0; i2<N ; i2++){
        M[i][i2]=3;
      }
    }
    M[0][0]=1;
    M[N-1][N-1]=1;
    M[0][N-1]=2;
    M[N-1][0]=2;
    
    i3=1;
    i4=N-2;

     for(i=1 ; i<N; i++){
      for(i2=i3; i2<=i3 ; i2++){
        M[i][i2]=1;
        //cout<<i<<" "<<i2<<endl;
         
        

      }

      i3++;
      i2++;
     
    }

    
    
    for(i=1 ; i<N; i++){
      for(i2=i4; i2<=i4 ; i2++){
        M[i][i2]=2;
        //cout<<i<<" "<<i2<<endl;
         
        

      }

      i4--;
      i2--;
     
    }

    for(i=0 ; i<N ; i++){
      for(i2=0; i2<N ; i2++){
        cout<<M[i][i2];
      }
      cout<<endl;
    }

   
    
    


  }
}