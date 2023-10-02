#include <iostream>
using namespace std;


int main(){
    
    int N, i , i2, lamp;
    char L[26] = {};

    while(cin>>L)
    {
     
       i=0;

       cin>>N;

       for(i , N ; i<N ; i=i+1)
       {

           i2=0;  
           cin>>lamp;

           for(i2 ; i2<26; i2=i2+1)
           {
    
              if(i2 == (lamp-1))
              {

                cout<<L[i2];
                i2=25;

              }

           }

        }

         cout<<endl; 

    }

    




}