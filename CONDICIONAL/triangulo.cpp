#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    float A , B , C;
    cin>>A>>B>>C;
    cout<<fixed<<setprecision(1);

    if(A>=B+C && A >B && B>C){
        cout<<"Area = "<<((A+B)*C)/2<<endl;
    }else{
        if(B>=A+C && B >C && B>A){
            cout<<"Area = "<<((A+B)*C)/2<<endl;
        }else{
            if(C>=A+B && C>A && C>B){
                cout<<"Area = "<<((A+B)*C)/2<<endl;
            }else{
                
                    cout<<"Perimetro = "<<A+B+C<<endl;
        }
    }

}
}