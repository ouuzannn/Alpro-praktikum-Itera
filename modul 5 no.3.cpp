#include <iostream>
using namespace std;

int main (){
    int a,i,j,k,hasil;
    cin>>a;
    hasil=a+4;
   for(i=1; i<=a; i++){
    hasil=hasil-2;
        for(k=1; k<=hasil; k++){
           if(i>j){
            cout<<" ";
           }
           else{
            cout<<"* ";
           }
        }
    cout<<endl;
   }

}
