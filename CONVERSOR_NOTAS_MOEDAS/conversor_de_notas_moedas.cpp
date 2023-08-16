#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){

int  moeda1 , notas, notas100, notas50 , notas20 , notas10 , notas5 , notas2 , moedastotais,moeda50, moeda25, moeda10, moeda5, moeda01 ;
double N;

cin>>fixed>>setprecision(2);
cin>>N;

notas=N;

//NOTAS//

cout<<"NOTAS:"<<endl;


notas100 = notas/100;
cout<<notas100<<" nota(s) de R$ 100.00"<<endl;


notas50= (notas%100)/50;
cout<<notas50<<" nota(s) de R$ 50.00"<<endl;

notas20= (((notas%100))%50)/20;
cout<<notas20<<" nota(s) de R$ 20.00"<<endl;

notas10= ((((notas%100))%50)%20)/10;
cout<<notas10<<" nota(s) de R$ 10.00"<<endl;

notas5= (((((notas%100))%50)%20)%10)/5;
cout<<notas5<<" nota(s) de R$ 5.00"<<endl;

notas2= ((((((notas%100))%50)%20)%10)%5)/2;
cout<<notas2<<" nota(s) de R$ 2.00"<<endl;

//MOEDA DE 1 REAL//

moeda1= ((((((notas%100))%50)%20)%10)%5)%2;

cout<<"MOEDAS:"<<endl;
cout <<moeda1<<" moeda(s) de R$ 1.00"<<endl;
//DEMAIS DE MOEDAS//

moedastotais = round((N-notas)*100);       //PQ PRECISO utilizar round para dar o valor certo ??//

moeda50= moedastotais/50;
cout<<moeda50<<" moeda(s) de R$ 0.50"<<endl;

moeda25= (moedastotais%50)/25;
cout<<moeda25<<" moeda(s) de R$ 0.25"<<endl;

moeda10= ((moedastotais%50)%25)/10;
cout<<moeda10<<" moeda(s) de R$ 0.10"<<endl;

moeda5= ((((moedastotais)%50)%25)%10)/5;
cout<<moeda5<<" moeda(s) de R$0.05"<<endl;

moeda01=((((moedastotais)%50)%25)%10)%5;
cout<<moeda01<<" moeda(s) de R$ 0.01" <<endl;







}
