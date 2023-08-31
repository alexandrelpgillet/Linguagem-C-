#include <iostream>
using namespace std;
int main(){
    int N , repetir , X;
    
    cin>>N;

    for(cin>>X , repetir=1 ; repetir<=N; repetir++ , cin>>X){
        
        if(X==0){
            cout<<"NULL"<<endl;
        }
        
        if(X%2==0 && X>0){
            cout<<"EVEN POSITIVE"<<endl;
        }

        if(X%2==0 && X<0){
            cout<<"EVEN NEGATIVE"<<endl;
        }

        if(X%2!=0 && X>0){
            cout<<"ODD POSITIVE"<<endl;
        }

         if(X%2!=0 && X<0){
            cout<<"ODD NEGATIVE"<<endl;
        }


    }
}