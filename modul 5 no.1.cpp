#include <iostream>
using namespace std;

int main () {
    int b,k,i,j;
    cin>>b;
    cin>>k;
    for(i=0; i<b; i++){
        for(j=0; j<k; j++){
            if(i%2==0){
                if(j%2==0){
                    cout<<"x ";
                }
                else{
                    cout<<"o ";
                }
            }
            else{
                if(j%2==0){
                    cout<<"o ";
                }
                else{
                    cout<<"x ";
                }
            }
        }
        cout<<endl;
    }
}
