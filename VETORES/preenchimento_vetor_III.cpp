#include <iostream>
#include <iomanip>

using namespace std;
int main(){

    double   N[101] , X;
    int i;
    i=0;
    

    cin>>X;
    N[0]=X;

    for(i ; i<100 ; i++){

        N[i+1] = N[i] / 2;
        cout<<fixed<<setprecision(4);
        cout<<"N["<<i<<"] = "<<N[i]<<endl;
    }

}