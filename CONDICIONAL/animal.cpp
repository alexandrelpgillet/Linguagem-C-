#include <iostream>
using namespace std;

int main(){
    
    
    string A , B, C , vertebrado, ave , carnivoro, mamifero, onivoro, herbivoro, invertebrado, inseto ,hematofago , anelideo;

     vertebrado = "vertebrado";
     ave= "ave";
     carnivoro = "carnivoro";
     mamifero = "mamifero";
     onivoro= "onivoro";
     herbivoro = "herbivoro";
     invertebrado = "invertebrado";
     inseto  = "inseto";
     hematofago ="hematofago";
     anelideo ="anelideo";




  

    cin>>A>>B>>C;


    if(A==vertebrado){
        if(B==ave){
            if(C==carnivoro){
                cout<<"aguia"<<endl;
            }

            if(C==onivoro){
                cout<<"pomba"<<endl;
            }
        }else{

        if(B==mamifero){
            if(C==onivoro){
                cout<<"homem"<<endl;
            }

            if(C==herbivoro){
                cout<<"vaca"<<endl;
            }
        }

        }



    }else{
        if(A==invertebrado){
            if(B==inseto){
                if(C==hematofago){
                    cout<<"pulga"<<endl;
                }
                if(C==herbivoro){
                    cout<<"lagarta"<<endl;
                }
            }

            if(B==anelideo){
                if(C==hematofago){
                    cout<<"sanguessuga"<<endl;
                }
                if(C==onivoro){
                    cout<<"minhoca"<<endl;
                }
            }
        }
    }

}