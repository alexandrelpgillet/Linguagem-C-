# include <iostream>
using namespace std;
int main(){

    int N , i , R;
    i=0;
    R=1;

    cin>>N;
    int L[N];

    for(N , i ; i<N ; i=i+1){

        cin>>L[i];
    }

    for(i=0, N ; i<N-1 ; i++){
        
        if(L[0]>L[1]){

    

            if(i%2==0){

               
                
                if(L[i]<=L[i+1]){

                   
                    
                    R=0;
                    i=N;
                }

            }
            else{

                
                if(L[i]>=L[i+1]){

                    
                    R=0;
                    i=N;
                }

                
            }

        }
        else{

           if(L[1]>L[0]){
              
              if(i%2==0){

                if(L[i]>=L[i+1]){
                    R=0;
                    i=N;
                }

              }
              else{

                if(L[i]<=L[i+1]){
                    R=0;
                    i=N;
                }
              }


           }
           else{

            R=0;
            i=N;
           }
        }


    }

    cout<<R<<endl;
}