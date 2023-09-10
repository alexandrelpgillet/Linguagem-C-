#include <iostream> 

using namespace std;
int main(){

    int N , num , NUM , total;

    

    cin>>N;

    for(N ; N>0 ; N--){

        cin>>num;
        NUM = num;
        total = 0;

        for(NUM-=1 ; NUM>0 ; NUM--){

            

            if(num % NUM == 0){

                total+=NUM;


            }
        }

        if(total == num ){
            cout<<num<<" eh perfeito"<<endl;
        }else{

            if(total <num || total>num){
            cout<<num<<" nao eh perfeito"<<endl;
        }
        }

    }
}