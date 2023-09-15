#include <iostream>
using namespace std;
int main(){

   
    int   N   , var ,total;
   

    
  
   
    while(N!=0){

       cin>>N;

       if(N>0){
        

        total =0;
        char pos[N];

        
        cin>>pos;
        

        for( N-1; N>=0 ; N--){
  

           if(pos[N]=='D'){
             total+=1;

            }else{

               if (pos[N]=='E'){
            
                total--;
               }
            }
        }

    


    if(total>0){

      if(total%4==0){

        cout<<"N"<<endl;

      }else{

         if(total%3==0){
            cout<<"O"<<endl;

        }else{

             if(total%2==0){

                cout<<"S"<<endl;

              }else{

                cout<<"L"<<endl;
               }
            }
        }

    }else{


         if(total%4==0){
            cout<<"N"<<endl;
          }else{

             if(total%3==0){

                cout<<"L"<<endl;

              }else{

                 if(total%2==0){

                    cout<<"S"<<endl;

                 }else{

                    cout<<"O"<<endl;
                    
                  }
               }
            }
    

    }
   

  

}
}

}