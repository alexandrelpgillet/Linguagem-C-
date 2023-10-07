#include <stdio.h>
using namespace std;
int main(){


    int N,i ,  i2, pares;

    while(scanf("%d", &N) !=EOF){
        i=0;
       
        pares=0;

        int T[N] = {};
        char L[N] = {};

        for(N , i ; i<N ; i++){

            scanf("%d %c" , &T[i] , &L[i]);
        }

        for(i=0 , N ; i<N-1 ; i++){
            i2= i+1;


            for( i2 ; i2<N ; i2++){


                if(T[i]!=0){

                    if(T[i]==T[i2]){

                        if(L[i]!=L[i2]){
                             
                             T[i2]=0;
                             pares+=1;
                             i2=N;


                        }
      
                }


                }

                
               

            }
        }

        printf("%d\n", pares);

       

    }
}