#include <iostream>
using namespace std;

int main (){
    int i,a,b,hasil=1;

    cin>>a;
    cin>>b;
    for(i=1; i<=b; i++){
        hasil=hasil*a;
        if(i%2==0&&i!=b){
            cout<<hasil*(-1)<<","<<" ";
        }
        else if(i==b){
            cout<<hasil;
        }
        else{
            cout<<hasil<<", ";
        }
    }
return 0;
}
