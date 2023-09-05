#include <iostream>
using namespace std;

int main(){
    int num1, num2 , num3 , num4 , num5, num_pares1 , num_pares2 , num_pares3 , num_pares4 , num_pares5, num_pares_total;
    num_pares1=0;
    num_pares2=0;
    num_pares3=0;
    num_pares4=0;
    num_pares5=0;
    num_pares_total=num_pares1+num_pares2+num_pares3+num_pares4+num_pares5;

    cin>>num1>>num2>>num3>>num4>>num5;
    for(num1 , num2 , num3 , num4 , num5 , num_pares_total ;num1%2!=0 , num2%2!=0 , num3%2!=0, num4%2!=0 , num5%2!=0  , num_pares_total<=5; ){
        for(num_pares1 ; num_pares1<=1 ; num_pares1++){
            cout<<num_pares1<<endl;
        }
         for(num_pares2 ; num_pares2<=1 ; num_pares2++){
            cout<<num_pares2<<endl;
        }
         for(num_pares3 ; num_pares3<=1 ; num_pares3++){
            cout<<num_pares3<<endl;
        }
         for(num_pares4 ; num_pares4<=1 ; num_pares4++){
            cout<<num_pares4<<endl;
        }
         for(num_pares5 ; num_pares5<=1 ; num_pares5++){
            cout<<num_pares5<<endl;
        }

        cout<<num_pares_total<<endl;

    }

    return 0;

    
}