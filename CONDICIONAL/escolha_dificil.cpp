#include <iostream>
using namespace std;
int main(){
    int frango, bife, massa , quantidade_frango, quantidade_massa , quantidade_bife, total , total_pedidos, total_frango , total_bife, total_massa;

    cin>>quantidade_frango>>quantidade_bife>>quantidade_massa;

    cin >>frango>>bife>>massa;

    if(frango-quantidade_frango<0){
        total_frango = -1 * (frango-quantidade_frango);
    }

    if(bife-quantidade_bife<0){
        total_bife = -1*(bife-quantidade_bife);
    }

    if(massa-quantidade_massa<0){
        total_massa= -1*(massa-quantidade_massa);
    }

    cout <<total_frango+ total_bife+total_massa<<endl;




}