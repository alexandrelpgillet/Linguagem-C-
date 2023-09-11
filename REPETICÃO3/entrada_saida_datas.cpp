#include <iostream> 
using namespace std;
int main(){


    char data[8];

    while(cin>>data){
        cout<<data[3]<<data[4]<<data[2]<<data[0]<<data[1]<<data[5]<<data[6]<<data[7]<<endl;
        cout<<data[6]<<data[7]<<data[2]<<data[3]<<data[4]<<data[5]<<data[0]<<data[1]<<endl;
        cout<<data[0]<<data[1]<<"-"<<data[3]<<data[4]<<"-"<<data[6]<<data[7]<<endl;
    }
}
