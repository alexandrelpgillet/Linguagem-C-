#include <iostream> 
using namespace std;
int main(){

    int player , repeticao , vot , total;
    

    
    
    while(cin>>player){
        
        
        
        repeticao = 0;
        total=0;

        
     

        for(/**repeticao=0 , total=0 **/; repeticao<player ; repeticao++){


            cin>>vot;
            total+=vot;
            

            

        }
    

        //if(repeticao == player){
           
            if(total >= player*2.0/3 ){
            
            cout<<"impeachment"<<endl;
        }else{


            
            cout<<"acusacao arquivada"<<endl;
            
        }
        
        //}


        
        

    }


}