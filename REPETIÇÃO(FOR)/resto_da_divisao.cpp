#include<iostream>
using namespace std;
int main(){
    int X, Y;
    cin>>X>>Y;

    if(X>Y){
        for(Y ; Y<X; Y++){
            
            if(Y%5==2 || Y%5==3){
                if(Y>3){
                cout<<Y<<endl;
            }
        }
    }
}
}