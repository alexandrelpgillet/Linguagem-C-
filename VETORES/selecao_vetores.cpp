#include <iostream>
#include <iomanip> 
using namespace std;

int main(){

    int i;
    float list[100]={}  ;
    i=0;

    for(i ; i<100 ; i++){

        cin>>list[i];
        if(list[i] <=10){
        cout<<fixed<<setprecision(1);
        cout<<"A["<<i<<"] = "<<list[i]<<endl;
        }


    }


}