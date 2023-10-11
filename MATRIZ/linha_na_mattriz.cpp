#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  int L,  i=0 , i2 , i3;
  float R , M[12][12] ;
  char O;
  
  cin>>L;
  cin>>O;

  for(i ; i<144 ; i++){
    
    for(i2=0; i2<11 ; i2++){
      
      for(i3=0; i3<11; i3++){
        cin>>M[i2][i3];
      }
    }
    
  }

  for(i=0 ; i<12 ; i++){

    R+=M[L][i];

  }

  if(O=='S'){
    cout<<fixed<<setprecision(1);
    cout<<R<<endl;

  }else{
    if(O=='M'){
      cout<<fixed<<setprecision(1);
      cout<<R/12<<endl;

    }
  }

}