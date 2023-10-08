#include <iostream>
using namespace std;

int main(){

    int N , i , C;
    

    while(N!=0){
      cin>>N;

      C=0;
      i=0;

      int L[N];

      for(i , N ; i<N ; i++){
        
         cin>>L[i];

       }

       


      for(i=0, N ; i<N-2 ; i++){

          
         
         if(L[i]==1 && L[i+1]==0 && L[i+2]==0){
            C+=1;
            L[i+2]=1;
            

         }

        

         if(L[i]==0 && L[i+1]==0 && L[i+2]==1){
            C+=1;
            L[i]=1;
            

         }

         if(L[i]==0 && L[i+1]==0 && L[i+2]==0){
            C+=1;
            L[i+1]=1;
            

         }

         


        
        
       }

       if(L[N-1]==0 && L[0] ==0 && L[N-2]==1){
                C+=1;
                
        }


        if(N!=0){
        cout<<C<<endl;
        }
    }

    
}