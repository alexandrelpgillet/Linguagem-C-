#include <iostream>
#include <iomanip>
using namespace std;
int main(){

    double Volume , Diametro  , Altura , area , pi;
    pi=3.14;

    while(cin>>Volume>>Diametro){
        Altura == 0;
        area == 0;

        Altura = Volume/(pi * (Diametro/2)*(Diametro/2));
        area = pi * (Diametro/2) * (Diametro/2);

        cout<<fixed<<setprecision(2);

        cout<<"ALTURA = "<<Altura<<endl;
        cout<<"AREA = "<<area<<endl;
        

    }
}