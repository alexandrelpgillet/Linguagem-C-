#include <iostream>
using namespace std;
int main(){


    int N[20] , y, z, i , i2 ;
    i=0;

    for(i ; i<20 ; i=i+1){

        cin>>N[i];
    }

    i = 0;
    i2=19;

    for(i ; i<10 ; i=i+1 , i2--){

        y = N[i];
        z = N[i2];

        N[i] = z;
        N[i2] = y; 
    }


    i=0;


    for(i ; i<20 ; i=i+1){

        cout<<"N["<<i<<"] = "<<N[i]<<endl;
    }


}