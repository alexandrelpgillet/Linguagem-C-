#include <iostream>
using namespace std;
int main(){


  int N , I9 , I7 , I7_2 , I5 , I5_2, I5_3 , I3 , I3_2 , I3_3 , I3_4 , I1 , I1_2 , I1_3 , I1_4 , I1_5;
  
  cin>>N;
  for(N ; N>0 ; N--){
    cin>>I9;
    cin>>I7>>I7_2;
    cin>>I5>>I5_2>>I5_3;
    cin>>I3>>I3_2>>I3_3>>I3_4;
    cin>>I1>>I1_2>>I1_3>>I1_4>>I1_5;

    cout<<I9<<endl; //9 andar
    cout<<I7+(I9-I7-I7_2)/2<<" "<<I7_2+(I9-I7-I7_2)/2<<endl; //8 andar
    cout<<I7<<" "<<(I9-I7-I7_2)/2<<" "<<I7_2<<endl; //7 andar
    cout<<I5+(I7-I5-I5_2)/2<<" "<<I5_2+(I7-I5-I5_2)/2<<" "<<I5_2+(I7_2-I5_2 - I5_3)/2<<" "<<I5_3+(I7_2-I5_2 - I5_3)/2<<endl;//6 andar
    cout<<I5<<" "<<(I7-I5-I5_2)/2<<" "<<I5_2<<" "<<(I7_2-I5_2 - I5_3)/2<<" "<<I5_3<<endl; //5 andar 
    cout<<I3+(I5-I3-I3_2)/2<<" "<< (I5-I3-I3_2)/2 + I3_2 <<" "<< I3_2+(I5_2-I3_2-I3_3)/2 <<" "<< (I5_2-I3_2-I3_3)/2 + I3_3<<" "<< I3_3+(I5_3-I3_3-I3_4)/2<<" "<<I3_4+(I5_3-I3_3-I3_4)/2<<endl;//4 andar
    cout<<I3<<" "<<(I5-I3-I3_2)/2<<" "<<I3_2<<" "<<(I5_2-I3_2-I3_3)/2<<" "<<I3_3<<" "<<(I5_3-I3_3-I3_4)/2<<" "<<I3_4<<endl;   //3 andar
    cout<<I1+(I3-I1-I1_2)/2<<" "<<(I3-I1-I1_2)/2+I1_2<<" "<<I1_2+(I3_2-I1_2-I1_3)/2<<" "<<(I3_2-I1_2-I1_3)/2+I1_3<<" "<<I1_3+(I3_3-I1_3-I1_4)/2<<" "<<(I3_3-I1_3-I1_4)/2+I1_4<<" "<< I1_4+(I3_4-I1_4-I1_5)/2<<" "<<(I3_4-I1_4-I1_5)/2+I1_5<<endl;                                                              //2 andar 
    cout<<I1<<" "<<(I3-I1-I1_2)/2<<" "<<I1_2<<" "<<(I3_2-I1_2-I1_3)/2<<" "<<I1_3<<" "<<(I3_3-I1_3-I1_4)/2<<" "<<I1_4<<" "<<(I3_4-I1_4-I1_5)/2<<" "<<I1_5<<endl; //1 andar
  }
}