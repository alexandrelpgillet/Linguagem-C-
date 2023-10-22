#include <iostream>
#include <math.h>

using namespace std;
int main(){

    int N ;
    long long num , i, flag;
    
    cin>>N;

    for(N ; N>0 ; N--){
        cin>>num;

        flag = 0;

        for(i=2 ; i<= sqrt(num) ; i++){
            
            if(num%i==0){
                
                flag+=1;
                i=num;
            }
        }

        if(flag==0){
            cout<<"Prime"<<endl;
        }else{
            cout<<"Not Prime"<<endl;
        }
    }
}