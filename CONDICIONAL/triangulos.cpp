#include <iostream >
using namespace std; 

int main(){
     
     double A , B , C;

     cin>>A>>B>>C;
     
     
        
        if(A>B and A>C){
           
           if(A>=B+C){
            cout<<"Não forma triangulo"<<endl;
        
           }else{
            if(A*A == B*B + C*C){
                cout<<"Triangulo retangulo"<<endl;

            }

            if(A*A > B*B + C*C){
                 cout<<"Triangulo obtusangulo"<<endl;
                
            }
                    
            if(A*A <B*B + C*C){
                cout<<"Triangulo acutangulo"<<endl;
                    
            }

                    
            }
                

        }

        
        if (B>A and B>C){
                
            if (B>=C+A){
            cout<<"Não forma triangulo"<<endl;
            
            }else{
                
                if(B*B==A*A+C*C){
                    cout<<"Triangulo retangulo"<<endl;
                }

                if(B*B>A*A+C*C){
                    cout<<"Triangulo obtusangulo"<<endl;
                }

                if (B*B<A*A+C*C){
                    cout<<"Triangulo acutangulo"<<endl;
                }

                
               

            }


        }

        if (C>A and C>B){
            
            if(C>=A+B){
            cout<<"Não forma triangulo"<<endl;
            }else{
              if(C*C==A*A+B*B){
                cout<<"Triangulo retangulo"<<endl;
             }

             if(C*C>B*B+A*A){
                cout<<"Triangulo obtusangulo"<<endl;
             }

             if(C*C<B*B+A*A){
                cout<<"Triangulo acutangulo"<<endl;
             }

             
             






            }
        
            
            

        }

        
        if(A==B and A==C and C==B){

                cout<<"Triangulo Acutangulo"<<endl;
                cout<<"Triangulo equilatero"<<endl;
            }

        
        if((A==B)>C or (A==B)<C){
            if(A>=B+C){
            cout<<"Não forma triangulo"<<endl;
        
           }else{
            if(A*A == B*B + C*C){
                cout<<"Triangulo retangulo"<<endl;

            }

            if(A*A > B*B + C*C){
                 cout<<"Triangulo obtusangulo"<<endl;
                
            }
                    
            if(A*A <B*B + C*C){
                cout<<"Triangulo acutangulo"<<endl;
                    
            }
            
            cout<<"Triangulo Isosceles"<<endl;
            
            

                    
            }
        }

        if((B==C)>A or (B==C)<A){
            
            if(C>=A+B){
            cout<<"Não forma triangulo"<<endl;
            }else{
              if(C*C==A*A+B*B){
                cout<<"Triangulo retangulo"<<endl;
             }

             if(C*C>B*B+A*A){
                cout<<"Triangulo obtusangulo"<<endl;
             }

             if(C*C<B*B+A*A){
                cout<<"Triangulo acutangulo"<<endl;
             }else{
                cout<<"Triangulo Isosceles"<<endl;
             }
             


        }
        
        

        }

        if((A==C)>B or (A==C)<B){
            if(C>=A+B){
            cout<<"Não forma triangulo"<<endl;
            }else{
              if(C*C==A*A+B*B){
                cout<<"Triangulo retangulo"<<endl;
             }

             if(C*C>B*B+A*A){
                cout<<"Triangulo obtusangulo"<<endl;
             }

             if(C*C<B*B+A*A){
                cout<<"Triangulo acutangulo"<<endl;
             }

        }
}
}




        


     



        