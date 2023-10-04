#include <iostream>
using namespace std;

int main(){
    
    
    uint64_t N1 , N2 , N3 , L[62] , i2;
    int i , N , T; 
    
    
    N1=0;
    N2=1;
    
    L[0] = 0;
    L[1] = 1;
    L[2] = 1;
    
    i=0;
    i2=2;
    
    
    for(i; i<59; i++){
        
        N3=N1+N2;
        N1=N3+N2;
        N2=N3+N1;
        
       if(i2==59){
            i=60;
        }

        L[i2++] = N3;
        

        if(i2==59){
            i=60;
        }


        L[i2++] = N1;
        

        if(i2==59){
            i=60;
        }

        L[i2++] = N2;
        

        
            
    }
    
    
    
    cin>>T;
    
    
    for(T ; T>0 ; T--){
     
       cin>>N;

       
    
      cout<<"Fib("<<N<<") = "<<L[N]<<endl;
    
    }
    
    
}