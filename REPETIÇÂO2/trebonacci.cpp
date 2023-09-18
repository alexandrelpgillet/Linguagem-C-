#include <iostream>
using namespace std;
int main(){


    int pos , repeat,  stop , stop2 , stop3 , pos_n;
    long long int N1 , N2 , N3 , num3 , num2 , num1 ;
    

    
    while(cin>>pos){

    repeat=pos;

    N1=0;
    N2=1;
    pos_n=0;


        for(repeat; repeat >0 ; repeat--){

           stop=0;
           stop2=0;
           stop3=0;
        
           N3=N1+N2;
           num3 = N3;

           N1=N3+N2;
           num1=N1;

           N2=N1+N3;
           num2=N2;

        
           while(stop==0){

              if(N3%3==0 || N3%10 ==3){
                //cout<<N3<<endl;
                pos_n+=1;

                if(pos_n==pos){
                    cout<<N3<<endl;
                }

                stop=1;
                
               }else{
                  num3=num3/10;
           
                  if(num3==3 || num3%10==3 ){
                
                   //cout<<N3<<endl;
                   pos_n+=1;

                      if(pos_n==pos){

                        cout<<N3<<endl;
                       }

                   stop=1;
        
                   }else{


                    if(num3==0){
                       stop=1;

                    }

                   }
                }
            }

             while(stop2==0){

                if(N1%3==0 || N1%10 ==3){
                    //cout<<N1<<endl;
                    pos_n+=1;

                    if(pos_n==pos){

                       cout<<N1<<endl;

                    }

                    stop2=1;
                 

                }else{

                  num1=num1/10;

                  if(num1==3 || num1%10==3 ){

                      //cout<<N1<<endl;
                      pos_n+=1;
                
                      if(pos_n==pos){

                         cout<<N1<<endl;

                      }
                      stop2=1;
                
                  }else{

                    if(num1==0){

                    stop2=1;
                    }
                  }

                }
             }


            while(stop3==0){

                if(N2%3==0 || N2%10==3){
                    //cout<<N2<<endl;
                    pos_n+=1;

                    if(pos_n==pos){

                    cout<<N2<<endl;

                    }

                    stop3=1;
                
                }else{

                  num2=num2/10;

                  if(num2==3 || num2%10==3 ){
                       //cout<<N2<<endl;
                       pos_n+=1;

                       if(pos_n==pos){

                           cout<<N2<<endl;
                       }

                       stop3=1;
                
                  }else{

                    if(num2==0){
                       stop3=1;

                    }
                  }
                }
            }

       
       
    
        }


    }

}