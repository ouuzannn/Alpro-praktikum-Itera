#include <iostream>
using namespace std;

int main (){
    int a,b,i,j;
    cin>>a;
    cin>>b;
    int mat[a][b];
    for(i=1; i<=a; i++){
        for(j=1; j<=b; j++){
            cin>>mat[i][j];
        }
    }
    int mat2[a][b];
    for(i=1; i<=a; i++){
        for(j=1; j<=b; j++){
         mat2[i][j]=mat[i][b+1-j];
        }
    }
    for(i=1; i<=a; i++){
        for(j=1; j<=b; j++){
           if(mat2[i][j]==2){
            cout<<"**,";
           }
           else if(mat2[i][j]==5&&j==b){
            cout<<"*****";
           }
           else if(mat2[i][j]==5){
            cout<<"*****,";
           }
           else if(j==b){
            cout<<mat2[i][j];
           }
           else{
            cout<<mat2[i][j]<<",";
           }
        }
        cout<<endl;
    }
}
