#include <iostream>
using namespace std;

int sifatbil(int a){
    if (a%2==0){
        cout<<"genap";
    }
    else{
       cout<<"ganjil";
    }
}
int main () {
    int a,ares;
    cin>>a;
    ares=sifatbil(a);
    cout<<ares<<" ";

}
