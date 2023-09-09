#include <iostream> 
using namespace std;
int main(){
    int  Nvez,  N  ,  Z, D , voto , total;
   
    string dia;
    
    while(cin>>N>>D){

        Nvez = N;
         Z=0;


        for(D ; D>0 ; D--){

           
            

            cout<<"dia"<<endl;
            cin>>dia;

           
            

            for(Nvez = N , Z , total = 0; Nvez>0 ; Nvez--){


                cout<<"voto"<<endl; 
                cin>>voto;

                if(voto !=0){
                    total+=1;
                }
            }

             if(total == N ){

                if(Z==0){
                Z+=1;
                cout<<dia<<endl;
                }
                
                
            }

           

            
           
        }

        if( Z == 0){
                cout<<"Pizza antes de FdI"<<endl;
 
            }

    

    }

    
}


