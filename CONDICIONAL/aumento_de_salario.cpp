#include <iostream>
#include <iomanip>

using namespace std;
int main (){
    
    float salario,per15 , per12, per10 , per7, per4 , novo_salario;
    
    per15=1.15;
    per12=1.12;
    per10=1.10;
    per7=1.07;
    per4=1.04;



    cin>>salario;
    cout<<fixed<<setprecision(2);


    if(salario>0){
        if(salario<=400){
            novo_salario= salario*per15;
            cout<<"Novo salario: "<<novo_salario<<endl;
            cout<<"Reajuste ganho: "<<salario*(per15-1)<<endl;
            cout<<fixed<<setprecision(0);
            cout<<"Em percentual: "<<(per15*100)-100<<" %"<<endl;

        }else{
          if( salario>400 && salario<=800){
            novo_salario= salario*per12;
            cout<<"Novo salario: "<<novo_salario<<endl;
            cout<<"Reajuste ganho: "<<salario*(per12-1)<<endl;
            cout<<fixed<<setprecision(0);
            cout<<"Em percentual: "<<(per12*100)-100<<" %"<<endl;

          }else{

          if ( salario>800 && salario<=1200){
            novo_salario= salario*per10;
            cout<<"Novo salario: "<<novo_salario<<endl;
            cout<<"Reajuste ganho: "<<salario*(per10-1)<<endl;
            cout<<fixed<<setprecision(0);
            cout<<"Em percentual: "<<(per10*100)-100<<" %"<<endl; 
          }else{

            if ( salario>1200 && salario<=2000){
                novo_salario = salario*per7;
                cout<<"Novo salario: "<<novo_salario<<endl;
                cout<<"Reajuste ganho: "<<salario*(per7-1)<<endl;
                cout<<fixed<<setprecision(0);
                cout<<"Em percentual: "<<(per7*100)-100<<" %"<<endl;

            }else{

                if( salario>2000){
                    novo_salario = salario*per4;
                    cout<<"Novo salario: "<<novo_salario<<endl;
                    cout<<"Reajuste ganho: "<<salario*(per4-1)<<endl;
                    cout<<fixed<<setprecision(0);
                    cout<<"Em percentual: "<<(per4*100)-100<<" %"<<endl;
                }
            }
          } 

           
        }
    }
    


}
}
