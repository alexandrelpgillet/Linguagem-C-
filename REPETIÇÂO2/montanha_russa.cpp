#include <iostream>
using namespace std;
int main(){

    int pessoas , altura_minima , altura_max , altura , N , total;
    
    
   
    
    while(cin>>pessoas>>altura_minima>>altura_max){
        



       for(N =0 ,total=0 ; N<pessoas ; N++  ){

        cin>>altura;

        

        if(altura>=altura_minima && altura<=altura_max){
           
            
            total+=1;
            

        }

        
    }
     cout<<total<<endl; 
    


    }
    
    
   
}