#include <iostream>
using namespace std;

int main(){

    int N ,  M[4][4] , i , i2 , F , F2, i3 , i4; 
    cin>>N;

    for(N ; N>0 ; N--){

        F=0;
        F2=0;

        for(i3=0 ; i3<4 ; i3++){
            
            for(i4=0 ; i4<4 ; i4++){
                cin>>M[i3][i4];
                
                if(M[i3][i4]==2048){
                    F2=1;
                   
                }
                
               
            }
        }
        
        
        if(F2==0){

            for(i=0 ; i<3 ; i++ ){
                
                for(i2 = 0 ; i2 <4 ; i2++){
                    
                    if(M[i][i2]!=0 && ((M[i][i2] == M[i+1][i2]) || M[i+1][i2]==0)){
                        cout<<"DOWN";
                        F+=1;
                        i2=4;
                        i=4;
                    }

                }
            }

            for(i=0 ; i<4 ; i++){

                for(i2=1 ; i2<4 ; i2++){
                    if(M[i][i2] !=0 && ((M[i][i2] == M[i][i2-1]) || M[i][i2-1]==0)){
                        
                        if(F!=0){
                            cout<<" ";
                        }
                        cout<<"LEFT";
                        F+=1;
                        i=4;
                        i2=4;

                    }
                }
            }

            for(i=0 ; i<4 ; i++){

                for(i2=0 ; i2<3 ; i2++){
                    if(M[i][i2]!=0 && ((M[i][i2] == M[i][i2+1]) || M[i][i2+1]==0)){
                        if(F!=0){
                            cout<<" ";
                        }
                        cout<<"RIGHT";
                        F+=1;
                        i=4;
                        i2=3;
                        
                    }
                }
            }

            for(i=1 ; i<4 ; i++){

                for(i2=0 ; i2<4 ; i2++){
                    if(M[i][i2]!=0 && ((M[i][i2] == M[i-1][i2]) || M[i-1][i2]==0 )){
                        if(F!=0){
                            cout<<" ";
                        }
                        cout<<"UP";
                        F+=1;
                        i=4;
                        i2=4;
                        
                    }
                }
            }

            
            if(F==0){
                cout<<"NONE";
            }
            
            cout<<endl;

            }else{
                cout<<"NONE"<<endl;
            }
        }
    }