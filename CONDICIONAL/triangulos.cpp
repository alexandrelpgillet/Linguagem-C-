#include <iostream>
#include <math.h>
using namespace std;


int main(){

double A, B , C , maior1 , maior2 ;
cin>>A >>B>>C;

maior1=(A+B+abs(A-B))/2;
maior2=(maior1 + C + abs(maior1-C))/2;

if(maior2==A){
    if(maior2>=B+C){
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }else{
        if(maior2*maior2 == B*B + C*C){
         cout<<"TRIANGULO RETANGULO"<<endl;
        }
        if(maior2*maior2 >B*B + C*C){
          cout<<"TRIANGULO OBTUSANGULO"<<endl;  
        }
        if(maior2*maior2< B*B + C*C){
          cout<<"TRIANGULO ACUTANGULO"<<endl;
        }
        if(maior2 == B and maior2 == C){
            
           cout<<"TRIANGULO EQUILATERO"<<endl;
        }else{
            if(maior2 ==B){
                cout<<"TRIANGULO ISOSCELES"<<endl;
            }

            if(maior2 ==C){
                cout<<"TRIANGULO ISOSCELES"<<endl;

            }else{
            if(B==C){
                cout<<"TRIANGULO ISOSCELES"<<endl;
            }
            }
        }
              

    }



}else{

if(maior2==B){
    if(maior2>=A+C){
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }else{
        if(maior2*maior2 == A*A + C*C){
         cout<<"TRIANGULO RETANGULO"<<endl;
        }
        if(maior2*maior2 >A*A + C*C){
          cout<<"TRIANGULO OBTUSANGULO"<<endl;  
        }
        if(maior2*maior2< A*A + C*C){
          cout<<"TRIANGULO ACUTANGULO"<<endl;
        }
        if(maior2 == A and maior2 == C){
            
           cout<<"TRIANGULO EQUILATERO"<<endl;
        }else{
            if(maior2 ==A){
                cout<<"TRIANGULO ISOSCELES"<<endl;
            }

            if(maior2 ==C){
                cout<<"TRIANGULO ISOSCELES"<<endl;

            }else{

            if(A == C){
                cout<<"TRIANGULO ISOSCELES"<<endl;
            }
            }
        }
              

    }



}else{
    if(maior2==C){
    if(maior2>=A+B){
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }else{
        if(maior2*maior2 == A*A + B*B){
         cout<<"TRIANGULO RETANGULO"<<endl;
        }
        if(maior2*maior2 >A*A + B*B){
          cout<<"TRIANGULO OBTUSANGULO"<<endl;  
        }
        if(maior2*maior2< A*A + B*B){
          cout<<"TRIANGULO ACUTANGULO"<<endl;
        }
        if(maior2 == A and maior2 == B){
            
           cout<<"TRIANGULO EQUILATERO"<<endl;
        }else{
            if(maior2 ==A){
                cout<<"TRIANGULO ISOSCELES"<<endl;
            }

            if(maior2 ==B){
                cout<<"TRIANGULO ISOSCELES"<<endl;

            }else{

            if(A ==B){
                cout<<"TRIANGULO ISOSCELES"<<endl;
            }
            }
        }
              

    }



}
}


}



}
        


     



        