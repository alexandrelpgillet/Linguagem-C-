#include <iostream>
#include <iomanip>
using namespace std;
int main (){

    float N1, N2 , N3, N4 , N5 , media;
    cin>>N1>>N2>>N3>>N4;
    media = (N1*2+N2*3+N3*4+N4*1)/10.0;
    cout<<fixed<<setprecision(1);

    if(media>=7){
        cout<<"Media: "<<media<<endl;
        cout<<"Aluno aprovado."<<endl;
    }else{
        if(media>=5 && media<=6.9){
            cin>>N5;
            if((media+N5)/2 >=5 ){
                cout<<"Media: "<<media<<endl;
                cout<<"Aluno em exame."<<endl;
                cout<<"Nota do exame: "<<N5<<endl;
                cout<<"Aluno aprovado."<<endl;
                cout<<"Media final: "<<(media+N5)/2<<endl;
            }else{
                if((media+N5)/2<5){
                    cout<<"Media: "<<media<<endl;
                    cout<<"Aluno em exame."<<endl;
                    cout<<"Nota do exame: "<<N5<<endl;
                    cout<<"Aluno reprovado."<<endl;
                    cout<<"Media final: "<<(media+N5)/2<<endl;
                }
            }
        }else{
            if(media<5.0){
                cout<<"Media: "<<media<<endl;
                cout<<"Aluno reprovado."<<endl;
            }
        }
    }



}