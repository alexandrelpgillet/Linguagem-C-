#include <iostream> 
using namespace std;
int main(){

int num[10]={} , i;
i=0;

for( ; i<10 ; i++){

cin>>num[i];

if(num[i] <=0){
    num[i]=1;
}

cout<<"X["<<i<<"] = "<<num[i]<<endl;


}

}