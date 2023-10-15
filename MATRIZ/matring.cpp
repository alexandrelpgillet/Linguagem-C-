#include <iostream>
using namespace std;

int main(){
    
    char nota , C ;
    int N ,  M[4][82] , i, i2 , i3=0;
    
    N=0;
    
    i=0;
    
    
    while(cin.get(nota)){
        
        
        if(nota=='\n'){
            i+=1;
            
            N=0;
           
            
        }else{
        
        M[i][N]= nota-'0';
       
        
        i3++;
       
        N++;
        }
        
    }
    
   i3=i3/4;
    
      
    
     for(i2=1 ; i2<i3-1 ;i2++){

      C= (((M[0][0]*1000+M[1][0]*100+M[2][0]*10+M[3][0])*(M[0][i2]*1000+M[1][i2]*100+M[2][i2]*10+M[3][i2])) + M[0][i3-1]*1000+ M[1][i3-1]*100 + M[2][i3-1]*10 + M[3][i3-1])%257;

      cout<<C;



    }
    cout<<endl; 
    
    
        
            
        
    
    
    
}