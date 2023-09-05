#include <iostream>
using namespace std;
int main(){
    
    int mes , dia , total;
    
    while(cin>>mes>>dia){
        if(mes==12){
            if(dia==25){
                cout<<"E Natal !"<<endl;
            }else{
                if(dia==24){
                    cout<<"E vespera de natal!"<<endl;
                }else{
                    if(dia>25){
                        cout<<"Ja passou!"<<endl;
                    }else{
                        if(dia<24){
                            cout<<"Faltam "<<25-dia<<" dia para o natal!"<<endl;
                        }
                    }
                }
            }
        }
    

        
        
        if(mes==11){
            total = 305+dia;
            cout<<"Faltam "<<360-total<<" dias para o natal!"<<endl;
        }else{

            if(mes==10){
                if(dia == 1 || dia ==31){
                    total = 275 +dia;

                    cout<<"Faltam "<<361 - total<<" dias para o natal!"<<endl;


                }else{
                total = 275 + dia;
                cout<<"Faltam "<<360 - total<<" dias para o natal!"<<endl;
                }
            }else{
                if(mes==9){
                    total = 244 + dia;
                    cout<<"Faltam "<<360 - total<<" dias para o natal!"<<endl;
                }else{
                    if(mes==8){
                        total = 213 + dia;
                        cout<<"Faltam "<<360 - total<<" dias para o natal!"<<endl;
                    }else{

                        if(mes==7){
                            total= 182 +dia;
                            cout<<"Faltam "<<360 - total<<" dias para o natal!"<<endl;
                        }else{
                            if(mes==6){
                                total= 152+dia;
                                cout<<"Faltam "<<360 - total<<" dias para o natal!"<<endl;
                            }else{
                                if(mes ==5){
                                    total= 121+dia;
                                    cout<<"Faltam "<<360 - total<<" dias para o natal!"<<endl;
                                }else{
                                    if(mes ==4){
                                        total =91 + dia;
                                        cout<<"Faltam "<<360 - total<<" dias para o natal!"<<endl;
                                    }else{
                                        if(mes==3){
                                            total= 60 +dia;
                                            cout<<"Faltam "<<360-total<<" dias para o natal!"<<endl;
                                        }else{
                                            if(mes ==2){
                                                total = 31 +dia;
                                                cout<<"Faltam "<<360 - total<<" dias para o natal!"<<endl;
                                            }else{

                                                if(mes==1){
                                                cout<<"Faltam "<<360 - dia<<" dias para o natal!"<<endl;
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
        
        