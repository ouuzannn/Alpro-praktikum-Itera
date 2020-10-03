#include <iostream>
using namespace std;

int main () {
int a,i,j,k;
cin>>a;
for(i=1; i<=a; i++){
    for(j=1; j<=i; j++){
        cout<<"*";
    }
cout<<endl;
}
for(i=1; i<=3; i++){
    for(j=1; j<=3; j++){
            if(j<i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }

    }
       cout<<endl;
}
 return 0;
}

