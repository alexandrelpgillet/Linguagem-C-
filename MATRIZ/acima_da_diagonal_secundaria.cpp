#include <iostream>
#include <iomanip>

using namespace std;
int main(){

  char O;

  float M[12][12]  , R;
  
  int i , i2 , i3;
  i3=11;

  cin>>O;
  
  R=0;

  for(i=0; i<12 ;i++){
    
    for(i2=0; i2<12 ; i2++){
      cin>>M[i][i2];
    }
  }

  for(i=0 ;i<11 ; i++ , i3--){
    
    for(i2=0 ; i2<i3 ; i2++){
      R+=M[i][i2];
      //cout<<i<<" "<<i2<<endl;
    }
  }

  if (O='M'){
    R=R/66;
  }
  
  cout<<fixed<<setprecision(1);
  cout<<R<<endl;


}