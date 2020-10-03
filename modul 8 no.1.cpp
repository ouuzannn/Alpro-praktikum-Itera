#include <iostream>
using namespace std;

int main() {
    int a,i;
    cin>>a;
    int A[a],hasil=0;;
    for(i=0; i<a; i++){
        cin>>A[i];
    }
    int A2[a];
    for(i=0; i<a; i++){
        A2[i]=A[a-1-i];
    }
    for(i=0; i<a; i++){
        if(i%2==0){
        hasil=hasil+(A2[i]*-1);
            cout<<A2[i]*(-1);
        }
        else if(i==a-1){
            cout<<A2[i];
        }
        else{
            hasil=hasil+A2[i];
            cout<<"+"<<A2[i];
        }
    }
    cout<<"="<<hasil;
}
