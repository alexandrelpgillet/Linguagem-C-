#include <iostream>

using namespace std;
int main(){

    int  T  ,  PA , PB;
    double G1 , G2 , G3 , A ;

   

    cin>>T;


        for(T ; T>0 ; T--){

            cin>>PA>>PB>>G1>>G2;

            G3 = G1 - G2;
            

           for(A =0, G3; PA<=PB ;  ){
            
            A++;
            
            PA*=(1+G1/100.0);
            PB*=(1 + G2/100.0);
            
           
            

            if(A>100){
                PA+=PB;
                
            }

            
            
           
            

            
           }

           if(PA >= PB){
            
            if(A>100){

                cout<<"Mais de 1 seculo."<<endl;
                
            }else{
                cout<<A<<" anos."<<endl;
            }

            }

           
            

        }

        
       
}




