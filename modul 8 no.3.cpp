#include <iostream>
using namespace std;

int main() {
    int a,i;
    cin>>a;
    int arr[a];
    for(i=0; i<a; i++){
        cin>>arr[i];
    }
    int arr2[a];
    for(i=0; i<a; i++){
        arr2[i]=arr[a-1-i];
        if(arr2[i]==arr[i]){
            cout<<"array asik"; break;
        }
        else{
            cout<<"array gak asik"; break;
        }
    }


}
