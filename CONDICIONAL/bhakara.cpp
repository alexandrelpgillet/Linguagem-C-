#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
    double A , B , C;
    cin>>A>>B>>C;

    if(A == 0){
        cout<<"Impossivel calcular"<<endl;
    }else{
        if((B*B-4*A*C)<0){
            cout<<"Impossivel calcular"<<endl;
        }else{
            cout<<fixed<<setprecision(5);
            cout<<"R1 = "<<(-1*B + sqrt(B*B-4*A*C))/(2*A);

            cout<<"R2 = "<<(-1*B - sqrt(B*B-4*A*C))/(2*A);

        }
}
}