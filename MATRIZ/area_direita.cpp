#include <iostream>
#include <iomanip> 
using namespace std;
int main(){

    float M [12][12] ,T=0;
    int i , i2 , i3=0;
    char P;

    cin>>P;

    for(i=0 ; i<12 ; i++){
        for(i2=0 ; i2<12 ; i2++){
            cin>>M[i][i2];
        }
    }
    
    
   
    for(i=1, i3=11; i<11 ; i++){

        
        for(i2=i3; i2<12 ; i2++){

            T+=M[i][i2];

        }

        if(i<5){
        i3-=1;
        }else{
            if(i>5){
                i3+=1;
            }
        }
    }

    if(P=='M'){
        T=T/30;
    }

    cout<<fixed<<setprecision(1);
    cout<<T<<endl;


}