#include <iostream>
using namespace std;

int main(){
    
    int distancia;
    cin>>distancia;

    
    if(distancia<0){
        cout<<"Valor invalido"<<endl;
    }else{ 
    
    if(distancia<=800){
        cout<<"1"<<endl;

    }else{
        if(distancia>800 && distancia<=1400){
            cout<<"2"<<endl;
        }else{
            if(distancia>1400 && distancia<=2000){
                cout<<"3"<<endl;
            }
        }
    }

}
}