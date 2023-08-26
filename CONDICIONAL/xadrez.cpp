#include <iostream>
using namespace std;
int main (){
    int L , C;
    cin>>L;
    cin>>C;

    if(C%2 != 0){
        if(L%2 !=0){
            cout<<"1"<<endl;
        }else{
            if(L%2 ==0){
                cout<<"0"<<endl;
            }
        }
    }else{
        if(C%2 == 0){
            if(L%2 !=0){
                cout<<"0"<<endl;
            }else{
                if(L%2 ==0){
                    cout<<"1"<<endl;
                }
            }
        }
    }
}