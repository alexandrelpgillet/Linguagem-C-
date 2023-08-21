#include <iostream>
using namespace std;
int main(){
    int A1 , A2 , A3;
    cin >>A1>>A2>>A3;

    if ((A2 >= A3 && A2 >= A1)){
        cout<<(A3+A1)*2<<endl;
    }else{
        if (A3 >= A1 && (A1 + A2) <= A3){
            cout<<(A1 * 4) + (A2 * 2)<<endl;
        }else{
            if(A1 >= A3 && (A3 + A2) <= A1){
                cout<<(A3 * 4) + (A2 * 2)<<endl;

            }else{
                cout<<(A3 + A1) * 2<<endl;
            }



        }
    }
}
        	
       
        	
        