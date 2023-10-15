#include <iostream>
using namespace std;

int main(){
    
    int  A , B , C , maior , menor1 , menor2 , i , P;
    while(cin>>A>>B>>C){

        maior=A;
        menor1=B;
        menor2=C;
        P=0;
        

        if(B>A && B>C){
            maior=B;
            menor1=A;
            menor2=C;
        }else{
            if(C>A && C>B){
                maior=C;
                menor1=A;
                menor2=B;
            }
        }

        i=maior;

        if(maior*maior == menor1 * menor1 + menor2 * menor2){

            for(i ; i>1 ; i--){
                if(maior%i == 0 && menor1%i == 0 && menor2%i==0){
                    
                    P+=1;
                    i=0;
                    
                }
            }

            if(P==0){
                cout<<"Tripla pitagorica primitiva"<<endl;
            }else{
                cout<<"Tripla pitagorica"<<endl;
            }


        }else{
            cout<<"tripla"<<endl;
        }


        
    }
}