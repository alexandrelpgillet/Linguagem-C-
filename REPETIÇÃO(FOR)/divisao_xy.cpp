#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int  N , M , entradas;
    float X , Y;
    entradas=0;
    cin>>N;
    for(cin>>X>>Y , entradas ; entradas<N ; entradas+=1 , cin>>X>>Y){
        if(Y==0){
            cout<<"divisao impossivel"<<endl;
        }else{
        cout<<fixed<<setprecision(1);
        cout<<X/Y<<endl;
        }
    }
    

}