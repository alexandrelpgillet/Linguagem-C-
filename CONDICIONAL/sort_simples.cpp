#include <iostream>
using namespace std;
int main(){
    int A , B ,C;
    cin>>A>>B>>C;

    if(A>B && A>C){
        if(B>C){
            cout<<A<<endl;
            cout<<B<<endl;
            cout<<C<<endl;
            cout<<" "<<endl;
            cout<<A<<endl;
            cout<<B<<endl;
            cout<<C<<endl;
        }else{
            if(C>B){
                cout<<A<<endl;
                cout<<C<<endl;
                cout<<B<<endl;
                cout<<" "<<endl;
                cout<<A<<endl;
                cout<<B<<endl;
                cout<<C<<endl;
            }
        }
    }else{
        if(B>A && B>C){
        if(A>C){
            cout<<B<<endl;
            cout<<A<<endl;
            cout<<C<<endl;
            cout<<" "<<endl;
            cout<<A<<endl;
            cout<<B<<endl;
            cout<<C<<endl;
        }else{
            if(C>A){
                cout<<B<<endl;
                cout<<C<<endl;
                cout<<A<<endl;
                cout<<" "<<endl;
                cout<<A<<endl;
                cout<<B<<endl;
                cout<<C<<endl;
            }
        }
    }else{
        if(C>A && C>B){
        if(A>B){
            cout<<C<<endl;
            cout<<A<<endl;
            cout<<B<<endl;
            cout<<" "<<endl;
            cout<<A<<endl;
            cout<<B<<endl;
            cout<<C<<endl;
        }else{
            if(B>A){
                cout<<C<<endl;
                cout<<B<<endl;
                cout<<A<<endl;
                cout<<" "<<endl;
                cout<<A<<endl;
                cout<<B<<endl;
                cout<<C<<endl;
            }
        }

    }
    }
}
}