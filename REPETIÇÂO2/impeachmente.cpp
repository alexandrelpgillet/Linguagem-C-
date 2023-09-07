#include <stdio.h> 
using namespace std;
int main(){

    int N , repeticao , vot , total;
    
    
    
    while(scanf("%d" , &N) != EOF){

           

        for( total=0 , repeticao=0 ; repeticao<N ; repeticao++){

            scanf("%d" , &vot);
            total+=vot;
        

        }
        
           
        if(total >= N*2/3.0 ){
            
            printf("impeachment\n");
        
        }else{

            printf("acusacao arquivada\n");
            
        }
          
        

    }


}