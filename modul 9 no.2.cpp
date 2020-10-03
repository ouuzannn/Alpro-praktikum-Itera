#include <iostream>
using namespace std;

int main(){
    int b,k,i,j;

    cin>>b;
    cin>>k;
    int mat[b][k];
    for(i=1; i<=b; i++){
        for(j=1; j<=k; j++){
            cin>>mat[i][j];
    }
    }
    for(i=1; i<=b; i++){
        for(j=1; j<=k; j++){
           cout<<mat[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
    int mat2[b][k];
    for(i=1; i<=b; i++){
        for(j=1; j<=k; j++){
            mat2[i][j]=mat[i][k+1-j];
        }
    }
    cout<<endl;
    for(i=1; i<=b; i++){
        for(j=1; j<=k; j++){
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }
}
