#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int mes , dia;
    
    while( cin>>mes>>dia){
        
        cin>>mes>>dia;

        
        
        
        if(mes==12 && dia==24){
            cout<<"E vespera de natal!"<<endl;
        }else{
            if(mes==12 && dia==25){
                cout<<"E natal!"<<endl;
            }else{
                if(mes==12 && dia>25){
                    cout<<"Ja passou!"<<endl;
                }else{

                   cout<<fixed<<setprecision(0);
                   cout<<"Faltam "<<360.5 -((mes-1)*30.5 + dia)-1<<" dias para o natal!"<<endl;


                }
            }
        }

    }
}