#include <iostream>
using namespace std;
int main(){
   
   int N[11]={} , i , i2;
   i=0;
   i2=1;
   
   cin>>N[0];
   cout<<"N[0] = "<<N[0]<<endl;

   for(i ; i <9 ; i++){

    N[i+1] = N[i]+N[i];
   
    cout<<"N["<<i2<<"] = "<<N[i+1]<<endl;
    i2+=1;




   }

}