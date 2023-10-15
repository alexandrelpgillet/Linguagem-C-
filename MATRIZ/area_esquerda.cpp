#include <iostream>
#include <iomanip> 
using namespace std;

int main(){

    int i=0 , i2=0 , i3;
    float M[12][12] , T=0;
    char P;

    cin>>P;

    for(i=0 ; i<12 ; i++){
        for(i2=0 ; i2<12 ; i2++){
            cin>>M[i][i2];
        }
    }
    
    i3=0;
    for(i=1 ; i <11 ; i++){
        if(i>6){
            i3-=1;
        }else{
        
        if(i<6){
        i3++;
        }

        }
        for(i2=0 ; i2<i3 ; i2++){
            
            T+=M[i][i2];
        
        }
    }

    if(P=='M'){
        T=T/30;
    }

    cout<<fixed<<setprecision(1);
    cout<<T<<endl;


}