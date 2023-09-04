#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){

    int A , B , C , repeat;
    repeat = 0;

    while(repeat<1){
        
        cin>>A;
        
        if(A >0){
        
        cin>>B>>C;
        cout<<fixed<<setprecision(0);
        cout<<trunc(sqrt(100*A*B/C))<<endl;
        
        }else{
            repeat++;
        }
        
        
}
}