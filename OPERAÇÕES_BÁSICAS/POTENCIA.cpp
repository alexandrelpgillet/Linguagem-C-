#include <iostream>

//biblioteca math.h permite o uso de potência atráves do uso do termo pow(varivel,valor a ser elevado)//


#include <math.h>

using namespace std; 

int main(){
    
    //usar variaveis com float(biblioteca math.h gera valores double, caso usar variveis int o msm gerará valores arredondados)//
    float num1, potencia_ao_quadrado;
    cin>>num1;
    potencia_ao_quadrado= pow(num1,2);
    cout<<"A potência do número elevado ao quadrado = "<<potencia_ao_quadrado<<endl;

return 0;

}