#include <iostream>
using namespace std;

int main () {
    int N,X,Y;

    cin>>N;
    cin>>X;
    cin>>Y;

    if(N%2==0){
        if(X%2==0&&Y%2==0){
            cout<<"yes";
        }
        else if(X>N&&Y>N){
            cout<<"no";
        }
        else{
            cout<<"no";
        }
    }
    else{
        if(X%2==0&&Y%2!=0){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }
    }
}
