#include <iostream>
#include <iomanip> 
using namespace std;

int main(){
   
   float X, Y, RESULTADO;

   cin>>fixed>>setprecision(4);

   cin>>X>>Y;
   
   RESULTADO= X*Y;

   cout<<fixed<<setprecision(4);
   cout<<"X x Y = "<<RESULTADO<<endl;

return 0; 
}