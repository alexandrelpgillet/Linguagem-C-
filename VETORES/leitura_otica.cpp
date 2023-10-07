#include <iostream>
using namespace std;
int main(){

    int N , i;

    while(N!=0){

        i=0;

        int L[5];
        
        cin>>N;

        for(i , N ; i<N ; i++){

            cin>>L[0]>>L[1]>>L[2]>>L[3]>>L[4];

            if(L[0] <=127 && L[1]>127 && L[2]>127 && L[3]>127 && L[4]>127){
                cout<<"A"<<endl;
            
            }
            else{
                 
                 if(L[0] >127 && L[1]<=127 && L[2]>127 && L[3]>127 && L[4]>127){
                    cout<<"B"<<endl;
                 }
                 else{
                     if(L[0] >127 && L[1]>127 && L[2]<=127 && L[3]>127 && L[4]>127){
                        cout<<"C"<<endl;
                     }
                     else{
                         if(L[0] >127 && L[1]>127 && L[2]>127 && L[3]<=127 && L[4]>127){
                            cout<<"D"<<endl;
                         }
                         else{
                             if(L[0] >127 && L[1]>127 && L[2]>127 && L[3]>127 && L[4]<=127){
                                cout<<"E"<<endl;
                             }else{
                                cout<<"*"<<endl;
                             }
                         }
                     }
                 }
            }




        }

    }
}