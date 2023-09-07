#include <iostream>
#include <math.h>
using namespace std;
int main(){

    int PA , PB , T , A;
    double G1 , G2;

   

    while(cin>>T){

        for(T ; T>0 ; T--){

            cin>>PA>>PB>>G1>>G2;

            PA * (pow((1+(G1/100 - G2/100)) , A ) ) = PB;

        }

    }

}