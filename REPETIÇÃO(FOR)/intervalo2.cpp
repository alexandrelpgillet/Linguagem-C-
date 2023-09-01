#include <iostream>
using namespace std;
int main(){
    
    int N , repeticao , X , in , out;
    repeticao=0;
    out=0;
    in=0;
    cin>>N;
    for(cin>>X; repeticao<N ; repeticao++ , cin>>X){

        if(X>=10 && X<=20){
            in+=1;

        }
        
        if(X<10 || X>20){
            out+=1;
        }
        
       
    }
     cout<<in<<" in"<<endl;
     cout<<out<<" out"<<endl;

}