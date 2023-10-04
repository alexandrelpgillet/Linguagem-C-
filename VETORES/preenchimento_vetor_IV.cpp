#include <iostream>
using namespace std;
int main(){


    int par[5], impar[5], N , i , i2 , i3 , i4;
    
    i=0;
    i2=0;
    i3=0;
    i4=0;

    for(i ; i<15 ; i++){

        cin>>N;

        if(N%2 == 0){

            par[i2] = N;
            i2 = i2+1;

            if(i2==5){
                for(i2=0; i2<5 ; i2++){
                    cout<<"par["<<i2<<"] = "<<par[i2]<<endl;
                }
                i2=0;
            }

        }
        else{

            

            impar[i3] = N;
            i3 = i3+1;

            if(i3==5){
                for(i3=0; i3<5 ;i3++){
                cout<<"impar["<<i3<<"] = "<<impar[i3]<<endl;
                }
                
                i3=0;
            }
            


        }
    
    }

    for(i4 ; i4<i3 ; i4++){
        cout<<"impar["<<i4<<"] = "<<impar[i4]<<endl;
    }

    i4=0;

    for(i4; i4<i2 ; i4++){
        cout<<"par["<<i4<<"] = "<<par[i4]<<endl;
    }



    
}