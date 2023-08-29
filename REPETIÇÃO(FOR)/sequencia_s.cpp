#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    
    for(float S=1, D=1 , soma=1 ; D<=100 ; D++ , soma+=S/D){
        if(soma>=5.18){
        cout<<fixed<<setprecision(2);
        cout <<soma<<endl;
        }
    
        
    }
}