#include <iostream>
using namespace std;

int main() {
    int b=10,i;
int A[b];

for(i=1; i<=b; i++){
    cin>>A[i];
}
for(i=1; i<=b; i++){
    if(A[i]==1||A[i]==0){
        cout<<"*";
    }
    else if(A[i]==5){
        cout<<"#";
    }
    else{
        cout<<A[i];
    }
}
return 0;
}
