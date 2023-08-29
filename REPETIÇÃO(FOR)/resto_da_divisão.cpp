#include <iostream>
using namespace std;
int main(){
    int X, Y , intervalo;
    cin>>X>>Y;

 if(X>Y){
    for(Y ; Y<X; Y++){

        
       
       
        if(Y%5 == 2 || Y%5 == 3 ){
            cout<<intervalo<<endl;
        }
        
    }

 }else{
    if(X<Y){
        
        for(X; X<Y ; X++){
            if(X%5 == 2 || X%5 == 3){
                cout<<X<<endl;
            }
        }

    }
 }   
}