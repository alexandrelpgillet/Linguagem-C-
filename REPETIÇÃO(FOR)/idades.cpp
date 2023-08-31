#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    
    int X , Y;
    float num , soma , divisor , soma2 , resultado;
    
   
    for(cin>>X , Y=X, num=0 ,soma=0 ; X>0 ; num++, cin>>X , soma+=X){

    

       
       
        soma2= soma+Y;
        divisor=num+1;
        
        
       

    }

    if(X<=0){

            resultado=soma2/divisor;
            cout<<fixed<<setprecision(2);
            cout<<resultado<<endl;
            
            
            
        }
        
}