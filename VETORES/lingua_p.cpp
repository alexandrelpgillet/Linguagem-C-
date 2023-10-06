#include <stdio.h>
using namespace std;
int main(){
    
    int i , i2;
    i = 0;

    char frase1 , frase[1010] , espaco;

    while(scanf("%c" , &frase1) !=EOF){
        
            frase[i]=frase1;
            i=i+1;
         
    }
    
    
    i2=i;
    i=0;
    
    //printf("%d" , i2);
    
   

    for(i ; i<i2-1 ; i++){

    if(frase[i] == 'p'){
            
            

                printf("%c" , frase[i+1]);
                i=i+1;
                
                
            
           
            
    }else{

       
            
            if(frase[i]!='p'){
                
                printf("%c" , frase[i]);
           
            }
            
 
              
           
    
            
        }
        
        
        
    }
    
    if(i2%2!=0 && frase[i2-1]=='p'){
        printf("p");
        
    }
    
    
}
    
  