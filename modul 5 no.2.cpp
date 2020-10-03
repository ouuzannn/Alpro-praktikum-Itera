#include <iostream>
using namespace std;

int main () {
    int i,j,b,k,hasil;
    cin>>b;
    cin>>k;
    for(i=1; i<=b; i++){
            hasil=0;
        for(j=1; j<=k; j++){
            hasil=hasil+i;
            cout<<hasil<<" ";
            }
            cout<<endl;
        }
    }


