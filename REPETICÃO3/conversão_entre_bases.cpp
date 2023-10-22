#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){

    int N , valor, i , Decimal , Hexadecimal, aux , aux2,i2, Binario , valor2 , casos;
    

    
    string num , T ;
    
    casos=1;
    cin>>N;

    for(N ; N>0 ; N-- , casos+=1){
        cin>>num>>T;
        Decimal=0;

        if(T=="bin"){
            cout<<"Case "<<casos<<":"<<endl;
            valor= num.size();
            

            for(i=0;i<valor ; i++){
                
                Decimal+= (num[i]-'0')*pow(2 , valor-1-i);
            }
            cout<<Decimal<<" dec"<<endl;
            int H[32]={0} , i2=32 , i3;

            for(i3=0 ; i3 <32 ; i3++){
                H[i3]=-1;
            }
            

            while(Decimal!=0){
                
                i2--;
                aux = Decimal%16;
                
                H[i2]=aux;
                Decimal = Decimal/16;
                
                
            }

            for(i2=0 ; i2<32; i2++){
                if(H[i2]!= -1){
                    if(H[i2]==10){
                        cout<<'a';
                    }else{
                        if(H[i2]==11){
                            cout<<"b";
                        }else{
                            if(H[i2]==12){
                                cout<<"c";
                            }else{
                                if(H[i2]==13){
                                    cout<<"d";
                                }else{
                                    if(H[i2]==14){
                                        cout<<"e";
                                    }else{
                                        if(H[i2]==15){
                                            cout<<'f';
                                        }else{
                                            
                                            cout<<H[i2];
                                            
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                
            }
            cout<<" hex"<<endl;

        

            
        }else{

            if(T=="dec"){
                 cout<<"Case "<<casos<<":"<<endl;
                
                int T[32] , i=31;

                for(i2=0 ; i2<32 ; i2++){
                    T[i2]=-1;
                }

                valor2=stoi(num);
                
                while(valor2!=0){
                    aux2=valor2%16;
                    
                    
                    T[i]=aux2;
                    valor2=valor2/16;
                    i--;

                }

                for(i=0 ; i<32 ; i++){
                    if(T[i]!=-1){

                        if(T[i]==10){
                        cout<<'a';
                    }else{
                        if(T[i]==11){
                            cout<<"b";
                        }else{
                            if(T[i]==12){
                                cout<<"c";
                            }else{
                                if(T[i]==13){
                                    cout<<"d";
                                }else{
                                    if(T[i]==14){
                                        cout<<"e";
                                    }else{
                                        if(T[i]==15){
                                            cout<<'f';
                                        }else{
                                            
                                            cout<<T[i];
                                            
                                        }
                                    }
                                }
                            }
                        }
                    }

                    }
                }
                cout<<" hex"<<endl;
                
                Binario=0;
                Decimal= num.size();
                valor=stoi(num);
                int H[32]={0};

                for(i=0; i<32 ; i++){
                    H[i]=-1;
                }
                i2=31;
                
                while(valor!=0){
                    aux = valor%2;
                    H[i2]=aux;
                    valor=valor/2;
                    i2--;
                    

                }

                for(i=0 ; i<32 ; i++){
                    
                    if(H[i]!= -1){
                    cout<<H[i];
                    }
                   
                }

                cout<<" bin"<<endl;

            }else{
                if(T=="hex"){
                     cout<<"Case "<<casos<<":"<<endl;
                    long long int TOTAL=0;
                    
                    Hexadecimal=num.size();
                    
                    long long int H[Hexadecimal];

                    for(i=Hexadecimal-1 ; i>=0 ; i--){
                        
                        if(num[i]=='a'){
                            H[i]=10;
                        
                        }else{
                            if(num[i]=='b'){
                                H[i]=11;
                            }else{

                                if(num[i]=='c'){
                                    H[i]=12;
                                }else{
                                    if(num[i]=='d'){
                                        H[i]=13;
                                    }else{

                                        if(num[i]=='e'){
                                            H[i]=14;
                                        }else{
                                            
                                            if(num[i]=='f'){
                                                H[i]=15;
                                            }else{

                                               H[i]= num[i]-'0';
                                               


                                            }
                                            
                                        }
                                    }
                                }
                            }
                            
                        }
                        
                    }

                    for(i=0 , i2=Hexadecimal-1; i<Hexadecimal; i++){
                        
                        
                        TOTAL+=H[i]* pow(16 , i2);
                        
                        i2--;
                        
                        
                        

                    }

                    cout<<TOTAL<<" dec"<<endl;

                    int P[32];
                    for(i=0 ; i<32 ; i++){
                        P[i]=-1;
                    }
                    i2=31;

                    while(TOTAL!=0){

                        aux= TOTAL%2;

                        P[i2]=aux;
                        i2--;
                        TOTAL=TOTAL/2;
   
                    }

                    for(i=0 ; i<32 ; i++){
                    
                    if(P[i]!= -1){
                    cout<<P[i];
                    }
                   
                }

                cout<<" bin"<<endl;


                }
            }
        }
        cout<<endl;
    }
}