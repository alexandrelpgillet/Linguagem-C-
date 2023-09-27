#include <iostream> 
using namespace std;
int main(){

    long int list[1001] = {} , T, i ;
    
    i=0;
    
    cin>> T;
    list[0]=0;
    
    for(i ; i<1000 ; i++){
       
         list[i+1] = list[i] +1;

         if(list[i]<T){
         cout<<"N["<<i<<"] = "<<list[i]<<endl;
         
         }else{

            list[i]=0;
            cout<<"N["<<i<<"] = "<<list[i]<<endl;
            list[i+1] = list[i] + 1;
         
         } 
    }
}