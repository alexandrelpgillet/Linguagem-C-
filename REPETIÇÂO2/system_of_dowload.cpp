#include <iostream>
using namespace std;
int main(){
    int N , N2 , num1 , num2 , num3;
    
    string num4;
    N2=0;
    cin>>N;

   for (N , N2 ; N2<N ; N2++ ){
        
        cin>>num1>>num2;
        num3 = num1+num2;
        

        if(num3 ==0){
            cout<<"PROXYCITY"<<endl;

        }else{
            if(num3==1){
                cout<<"P.Y.N.G."<<endl;
            }else{
                if(num3==2){
                    cout<<"DNSUEY!"<<endl;
                }else{
                    if(num3==3){
                        cout<<"SERVERS"<<endl;
                    }else{
                        if(num3==4){
                            cout<<"HOST!"<<endl;
                        }else{
                            if(num3==5){
                                cout<<"CRIPTONIZE"<<endl;
                            }else{
                                if(num3==6){
                                    cout<<"OFFLINE DAY"<<endl;
                                }else{
                                    if(num3==7){
                                        cout<<"SALT"<<endl;
                                    }else{
                                        if(num3==8){
                                            cout<<"ANSWER!"<<endl;
                                        }else{
                                            if(num3==9){
                                                cout<<"RAR?"<<endl;
                                            }else{
                                                if(num3==10){
                                                    cout<<"WIFI ANTENNAS"<<endl;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }


    }
}