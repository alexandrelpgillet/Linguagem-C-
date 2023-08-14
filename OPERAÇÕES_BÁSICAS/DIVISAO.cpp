#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    
    double X, Y , DIVISAO; 
    cin>>X>>Y;
    DIVISAO=X/Y;
    cout<<fixed<<setprecision(10);
    cout<<"O valor da divisão entre os dos números é :"<<DIVISAO<<endl;

return 0;
}