#include <iostream>
#include <iomanip>
//formatação de valores de entrada e saída //

using namespace std;

int main (){

    double A,B, divisao;

//valores de entrada até duas casas decimais após a vírgula//
    cin>>setprecision(4);
    cin>>A>>B;

    divisao= A/B;

//valor de saída até duas casas  decimais após a vírgula//
    cout<<setprecision(2);
    cout<<"A/B = "<<divisao<<endl;





    return 0;
}

