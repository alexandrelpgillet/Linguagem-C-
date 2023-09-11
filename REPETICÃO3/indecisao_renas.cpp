#include <iostream> 
using namespace std;
int main(){

    int   total , resto , Dasher , Dancer , Prancer , Vixen , Comet , Cupid, Donner, Blitzen , Rudolph;
    cin>>Dasher>>Dancer>>Prancer>>Vixen>>Comet>>Cupid>>Donner>>Blitzen>>Rudolph;

    total = Dasher+Dancer+Prancer+Vixen+Comet+Cupid+Donner+Blitzen+Rudolph;
    resto = total%9;
    
    if(total%9 == 0){
        cout<<"Rudolph"<<endl;
    }else{

        
            
            if(resto ==1){
                cout<<"Dasher"<<endl;

            }else{
                if(resto == 2 ){
                    cout<<"Dancer"<<endl;
                }else{
                    if(resto ==3){
                        cout<<"Prancer"<<endl;
                    }else{
                        if(resto==4){
                            cout<<"Vixen"<<endl;
                        }else{
                            if(resto == 5){
                                cout<<"Comet"<<endl;
                            }else{
                                if(resto ==6){
                                    cout<<"Cupid"<<endl;
                                }else{
                                    if(resto ==7){
                                        cout<<"Donner"<<endl;
                                    }else{
                                        if(resto ==8){
                                            cout<<"Blitzen"<<endl;
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
    