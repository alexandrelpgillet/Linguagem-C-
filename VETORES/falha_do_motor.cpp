#include <iostream> 
using namespace std;
int main(){

    int  N , R[100] = {} , stop , i;
    
    stop=0;
    i=1;
    cin>>N;
    cin>>R[0];


    for(N , i ; i<N ; i++)
    {
       
       cin>>R[i];

       if(R[1]<R[0]){
        
        while(stop !=1){
        cout<<i+1<<endl;
        stop++;
        }

       }

       else
       {

          if(R[i] < R[i-1])
          {
        
            while(stop!=1)
            {

              cout<<i+1<<endl;
              stop++;

            }

         }
      }

    }

    if(stop == 0)
    {
        cout<<0<<endl;
    }
}