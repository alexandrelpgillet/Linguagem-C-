#include <iostream>
#include <math.h> 
using namespace std;
int main(){
    int X ;
    cin>>X;
    for(int B=1 , resultado =1 ; B<=X ; B++ , resultado*=B){
        if(B==X){
        cout<<resultado<<endl;
        }
    }
}