#include <iostream>
using namespace std;

int main(){

    int num, N  , N2  , N3, repeticao;
    repeticao = 0;
    N=0;
    N2=1;
    N3 = N + N2;

    cin>>num;
    
    for(num ,N3=-1 ; repeticao<num; repeticao++){

        N = N2;
        
            N2=N3;
            N3 = N+N2;

            
           
            
            if(repeticao == num-1){
             
                cout<<-N3<<endl;


            
           
            }else{
                 cout<<-N3<<" ";
            }
           

            if(N3 >=num){
                break;
            }
            
           
           
        }
        
        
        

        

        
    }
     


