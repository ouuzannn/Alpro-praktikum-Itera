#include <iostream>
using namespace std;
int fak(int bil){
    int hasil=1;
    for(int i=bil; i>=1; i--){
        hasil=hasil*i;
    }
    return hasil;
}
int main(){
    int bil;
    cin>>bil;
    cout<<fak(bil);

}
