#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int N , i , S , B , A , S1 , B1 , A1 , S_t , B_t , A_t , S1_t , A1_t ,B1_t;
    
    
    S_t = 0;
    B_t = 0;
    A_t = 0;
    S1_t= 0;
    A1_t = 0; 
    B1_t =0;


    char name[10];
    
    i=0;


    cin>>N;

    for(i , N ; i<N ; i=i+1)
    {

        cin>>name;
        cin>>S>>B>>A;
         
         S_t += S;
         B_t += B;
         A_t += A;


        cin>>S1>>B1>>A1;
         
         S1_t+= S1;
         B1_t +=B1;
         A1_t += A1;

    }
    
    cout<<fixed<<setprecision(2);
    cout<<"Pontos de Saque: "<<(float)S1_t*100/S_t<<" %."<<endl;
    cout<<"Pontos de Bloqueio: "<<(float)B1_t*100/B_t<<" %."<<endl; 
    cout<<"Pontos de Ataque: "<<(float)A1_t*100/A_t<<" %."<<endl;  


}