#include<iostream>
using namespace std;
int main(){
    string sheldon , raj;
    int N ,  repeat;
    repeat=1;
    
    
    
    for(cin>>N  , cin>>sheldon>>raj; repeat<=N ; repeat++ , cin>>sheldon>>raj){
        
        

        if(sheldon=="tesoura"){
            if(raj=="papel"){
                cout<<"Caso #"<<repeat<<": Bazinga!"<<endl;

            }else{
                if(raj=="lagarto"){
                    cout<<"Caso #"<<repeat<<": Bazinga!"<<endl;

                }else{
                    if(raj!=sheldon){
            cout<<"Caso #"<<repeat<<": Raj trapaceou!"<<endl;
        }
                }
            }

        }

        if(sheldon=="papel"){
            if(raj=="pedra"){
                cout<<"Caso #"<<repeat<<": Bazinga!"<<endl;

            }else{
                if(raj=="Spock"){
                    cout<<"Caso #"<<repeat<<": Bazinga!"<<endl;

                }else{
                    if(raj!=sheldon){
            cout<<"Caso #"<<repeat<<": Raj trapaceou!"<<endl;
        }
                }
            }

        }

        if(sheldon=="pedra"){
            if(raj=="lagarto"){
            cout<<"Caso #"<<repeat<<": Bazinga!"<<endl;

            }else{
                if(raj=="tesoura"){
                    cout<<"Caso #"<<repeat<<": Bazinga!"<<endl;

                }else{
                    if(raj!=sheldon){
            cout<<"Caso #"<<repeat<<": Raj trapaceou!"<<endl;
        }
                }
            }

        }

            if(sheldon=="lagarto"){
            if(raj=="Spock"){
                cout<<"Caso #"<<repeat<<": Bazinga!"<<endl;

            }else{
                if(raj=="papel"){
                    cout<<"Caso #"<<repeat<<": Bazinga!"<<endl;

                }else{
                    if(raj!=sheldon){
            cout<<"Caso #"<<repeat<<": Raj trapaceou!"<<endl;
        }
                }
            }

        }
            
            if(sheldon=="Spock"){
            if(raj=="tesoura"){
                cout<<"Caso #"<<repeat<<": Bazinga!"<<endl;

            }else{
                if(raj=="pedra"){
                    cout<<"Caso #"<<repeat<<": Bazinga!"<<endl;

                }else{
                    if(raj!=sheldon){
            cout<<"Caso #"<<repeat<<": Raj trapaceou!"<<endl;
        }
                }
            }

        }
        
        if(sheldon == raj){
        cout<<"Caso #"<<repeat<<": De novo!"<<endl;
            
        }
            
        }
    }



        