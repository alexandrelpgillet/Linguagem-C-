#include <iostream>
using namespace std;
int main(){

        int gol1 , gol2 , gol1_2 , gol2_2 , N , time1 , time2;
        string space;

        cin>>N;

        for(N ; N>0 ; N--){

            time1 = 0;
            time2 = 0;
           
            

            cin>>gol1>>space>>gol2;
            cin>>gol2_2>>space>>gol1_2;

            if(gol1 == gol2){
                time1+=1;
                time2+=1;

            }else{
                if(gol1 > gol2){
                    time1+=3;
                }else{

                    

                    time2+=3;
                
                }
            }

            if(gol1_2 == gol2_2){
                time1+=1;
                time2+=1;
            }else{
                if(gol1_2 > gol2_2){
                    time1+=3;
                }else{

                    
                    time2+=3;
                
            }
            }

            

            if(time1 > time2){
                cout<<"Time 1"<<endl;
            }else{
                if(time2> time1 ){
                    cout<<"Time 2"<<endl;
                }else{
                    if(time1 == time2){
                        if(gol1+gol1_2 > gol2+gol2_2){
                            cout<<"Time 1"<<endl;
                        }else{
                            if(gol2+ gol2_2 > gol1+gol1_2){
                                cout<<"Time 2"<<endl;
                            }else{
                                if(gol2+gol2_2 == gol1+gol1_2){
                                    if(gol2>gol1_2){
                                        cout<<"Time 2"<<endl;
                                    }else{
                                        if(gol1_2>gol2){
                                            cout<<"Time 1"<<endl;
                                        }else{
                                            cout<<"Penaltis"<<endl;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }

        }
}