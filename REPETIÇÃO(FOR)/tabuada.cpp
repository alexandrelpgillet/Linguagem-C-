#include <iostream>
using namespace std;
int main (){
    int N;
    cin>>N;
    
    for(int x = 1 ; x<=10 ; x+=1){
        cout<<x<<" x "<<N<<" = "<<N*x<<endl;
    }
}