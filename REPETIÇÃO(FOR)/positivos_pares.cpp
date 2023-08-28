#include <iostream>
#include <iomanip> 
using namespace std;
int main (){
    float a , b ,c ,d ,e ,f, positivo, positivo2 , positivo3 , positivo4, positivo5 , positivo6 , valor1 , valor2 , valor3 , valor4 ,valor5 , valor6;
    valor1=0;
    valor2=0;
    valor3=0;
    valor4=0;
    valor5=0;
    valor6=0;
    
    positivo=0;
    positivo2=0;
    positivo3=0;
    positivo4=0;
    positivo5=0;
    positivo6=0;
    cin>>a>>b>>c>>d>>e>>f;

    if(a>0){

    for(a>=0 ; positivo<=0 ; positivo+=1){}
    for(a>=0 ; valor1<=a ; valor1+=a ){}
    
    }

    if(b>0){

    for(b>=0 ; positivo2<=0 ; positivo2+=1){}
    for(b>=0 ; valor1<=b ; valor2+=b ){}
    
    }


    if(c>0){


    for(c>0 ; positivo3<=0 ; positivo3+=1){}
    for(c>=0 ; valor3<=c ; valor3+=c ){}
    
    }

    
    if(d>0){
    for(d>0 ; positivo4<=0 ; positivo4+=1){}
    for(d>=0 ; valor4<=d ; valor4+=d ){}
   
    }

    
    if(e>0){
    for(e>0 ; positivo5<=0 ; positivo5+=1){} 
    for(e>=0 ; valor5<=e ; valor5+=e){}    
    }

    
    if(f>0){
    for(f>0 ; positivo6<=0 ; positivo6+=1){}
    for(f>=0 ; valor6<=f ; valor6+=f ){}
    valor6==f;
    } 

    cout<<positivo + positivo2 + positivo3 +positivo4 +positivo5 +positivo6<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1);
    cout<< ((valor1+valor2+valor3+valor4+valor5+valor6)/2)/(positivo + positivo2 + positivo3 +positivo4 +positivo5 +positivo6)<<endl;


}

