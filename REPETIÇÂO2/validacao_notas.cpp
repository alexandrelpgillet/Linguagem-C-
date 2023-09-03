#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    
    int N;
    N=0;
    float nota , total , media;
    total= 0;
    while(N<2){
        cin>>nota;
        
        if(nota< 0 || nota>10){
            cout<<"nota invalida"<<endl;
        }else{
            N+=1;
            total+=nota;
            
        }
        
    }
     cout<<fixed<<setprecision(2);
    cout<<"media = "<<total/2<<endl;
     
   
}