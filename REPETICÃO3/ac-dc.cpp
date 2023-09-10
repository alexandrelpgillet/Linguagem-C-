#include <iostream>
using namespace std;
int main (){

    int N , T;

    cin>>N;

    for(N ; N>0 ; N--){

        cin>>T;

        if(T == 2015){
            cout<<"1 A.C."<<endl;
        }else{
            if(T>2015){
                cout<<T-2014<<" A.C."<<endl;
            }

            if(T<2015){
                cout<<2015 - T<<" D.C."<<endl;
            }
        }
    }
}