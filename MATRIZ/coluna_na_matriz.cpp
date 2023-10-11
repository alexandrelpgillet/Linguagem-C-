#include <iostream>
#include <iomanip> 
using namespace std;
int main(){

  float M[12][12] , R;
  
  int C , i , i2;
  char O;

  R=0;
  i=0;

  cin>>C;
  cin>>O;

  for(i ; i<12 ; i++){

    for(i2=0;i2<12 ; i2++){
      cin>>M[i][i2];
    }
  }

  for(i=0 ; i<12 ; i++){
    R+=M[i][C];
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