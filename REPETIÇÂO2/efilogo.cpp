#include <stdio.h>
using namespace std;

int main(){

   char s , s2 , s3 ;
   
  
   
   while(scanf("%c" , &s) !=EOF){
     

           if((s=='f' ||s=='F'|| s=='j'||s=='J' || s=='s'||s=='S' || s=='p'|| s=='P' || s=='v' || s=='V'|| s=='b' || s=='B'|| s=='x' || s=='X'|| s=='z'|| s=='Z')  && s2=='f'){
      
                 s3 =s;
      
            }else{
 
               if(s3!=s){
       
                  if(s=='f'  ||s == 'j' || s=='s'  || s=='p' || s=='v'  || s=='b'  || s=='x'  || s=='z' ){

         
                       s2 ='f';

                     printf("f");
         
                   }else{
                      
                      if(s=='F' || s=='J' || s=='S' || s=='P' || s=='V' || s=='B' || s=='X'||s=='Z'){
                          
                          s2 ='f';
                          
                          printf("F");
                          
                       }else{
                          
                          printf("%c" ,s);
                          s2=0;
                          s3=0;
                          
                        }
                    }
                  
                  
    


                 }
      

            }

   }

    

}