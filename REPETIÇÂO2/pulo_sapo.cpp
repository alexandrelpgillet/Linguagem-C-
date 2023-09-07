#include <iostream>
using namespace std;
int main(){

    int P , N , altura , altura2 , altura3 , loser;
    cin>>P>>N;
    altura = 0;
    loser = 0;
    

    for( P , N  ; N>0 ; N--){
        
        altura3 =altura;
        cin>>altura;
        altura2 = altura;

        
       if(altura3 !=0){
        if((altura2 - altura3) > P || (altura3- altura2)> P ){

           
            
            loser+=1;
            
        }
       }
        

    

    }

    if(loser !=0){


    
        cout<<"GAME OVER"<<endl;

            
        }else{
            cout<<"YOU WIN"<<endl;
        }
}