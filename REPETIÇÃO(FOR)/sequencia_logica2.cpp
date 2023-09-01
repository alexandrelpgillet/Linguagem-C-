#include <iostream>

using namespace std;


int main(){
    int X , Y , repeticao;
    string espaco=" ";
    cin>>X>>Y;

    for(repeticao=1; repeticao<=Y ; repeticao++   ){

        if(repeticao%X != 0){
            cout<<repeticao<<espaco;
        }

       
        
       
        if(repeticao%X ==0){
            cout<<repeticao;
            
            cout<<endl;
        }
    }

}
