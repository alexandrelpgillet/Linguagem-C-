#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    float salario, imposto1 , imposto2, imposto3 , imposto_total;
    cin>>salario;
    cout<<fixed<<setprecision(2);

    if(salario<=2000.00){
        cout<<"Isento"<<endl;

    }else{
        if(salario>2000 && salario<=3000.00){
            imposto1= (salario-2000)*0.08;
            cout<<"R$ "<<imposto1<<endl;
        }else{
            if(salario<=4500){
                imposto1= ((salario-(salario-3000))-2000.0)*0.08; 
                imposto2 = (salario-3000)*0.18;
                imposto_total = imposto1 +imposto2;
                
                cout<<"R$ "<<imposto_total<<endl;
            }else{
                if(salario>4500){
                    imposto1 = 1000*0.08;
                    imposto2 = 1500*0.18;
                    imposto3 = (salario-4500)*0.28; 
                    imposto_total= imposto1 + imposto2 +imposto3;
                    cout<<"R$ "<<imposto_total<<endl;

                }

                
            }
        }
    }

} 