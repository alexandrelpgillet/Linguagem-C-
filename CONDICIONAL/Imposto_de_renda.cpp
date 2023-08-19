#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    float salario , imposto;
    cin>>fixed>>setprecision(2);
    cin>>salario;

    cout<<fixed<<setprecision(2);

    if(salario<=2000){
        cout<<"Isento"<<endl;
    }else{
        if(salario>2000){
            if(salario<=3000){
                imposto = (salario-2000)*0.08;
                cout<<"R$ "<<imposto<<endl;

            }else{
                if(salario<=4500){
                    imposto = (salario-3000)*0.18 + (salario-2000)*0.08;
                    cout<<"R$ "<<imposto<<endl;
                }else{
                   if(salario>4500){
                    imposto = (salario- 4500)*0.28 + (4500-2000-1500)*0.08 + (4500-2000-1000)*0.18;
                    cout<<"R$ "<<imposto<<endl;
                   }
                }
            }
        }
    }
}