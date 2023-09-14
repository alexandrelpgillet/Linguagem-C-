#include <iostream>
#include <iomanip> 
using namespace std;
int main(){
    float n1, n2;
    int stop1 , stop2 , stop3 , stop4 , resposta;
    stop1 =0;

    while(stop1 !=1){

        stop2 = 0;
        stop3 = 0;
        stop4= 0;

        while(stop2 !=1){
            
            cin>>n1;

            if(n1>=0 && n1<=10){
                
                stop2+=1;

            }else{
                cout<<"nota invalida"<<endl;
            }

        }

        while(stop3 !=1){
            
            cin>>n2;

            if(n2>=0 && n2<=10){

                stop3+=1;
            }else{
                
                cout<<"nota invalida"<<endl;
            }

        }

        cout<<fixed<<setprecision(2);
        cout<<"media = "<<(n1+n2)/2<<endl;
        
        

        while(stop4 !=1){
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            cin>>resposta;
            
            if(resposta ==1){
                stop4+=1;
                
            }else{
                if(resposta ==2){
                    stop4+=1;
                    stop1+=1;

                }else{
                    continue;
                    
                }
            }
        }
    }
}