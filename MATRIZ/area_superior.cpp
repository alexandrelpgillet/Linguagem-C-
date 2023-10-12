#include <iostream>
#include <iomanip>

using namespace std;
int main(){

  int i, i2 ,i3 , i4;
  double M[12][12] , R;
  char O;

  cin>>O;
  R=0; 
  
  for(i=0 ; i<12 ; i++){
    
    for(i2=0; i2<12 ; i2++){
      cin>>M[i][i2];
     
    }
  }
  
  

  for(i=0 , i4=11 , i3=1 ; i<5 ; i++ , i3++ , i4--){

    for(i2=i3 ; i2<i4 ; i2++){

      R+=M[i][i2];



    }
  }

  if(O=='M'){
    R=R/30;
  }
  
  cout<<fixed<<setprecision(1);
  cout<<R<<endl;
  

}