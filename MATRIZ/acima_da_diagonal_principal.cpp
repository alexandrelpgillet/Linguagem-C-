#include <iostream>
#include <iomanip>

using namespace std;
int main(){

  char O;
  
  float M[12][12] ,R;
  
  
  int i , i2 ,i3;
   
  R=0; 

  cin>>O;

  for(i=0 ; i<12 ; i++){

    for(i2=0; i2<12 ; i2++){
      cin>>M[i][i2];
    }

  }

  for(i=0 , i2=1; i<12 ; i++ ,i2++){
    
    for(i3=i2; i3<12 ; i3++){
      R+=M[i][i3];

      

    }
  }

  if(O=='M'){

    R=R/66;
    
  }
  
  cout<<fixed<<setprecision(1);
  cout<<R<<endl;


}