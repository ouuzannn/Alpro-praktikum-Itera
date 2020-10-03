#include <iostream>
using namespace std;

int main () {
string nama="qwerty";
string nim="12345";

cout<<"input username :";
cin>>nama;
cout<<"input password :";
cin>>nim;

if(nama!="qwerty"||nim!="12345"){
    cout<<"login gagal";
}
else{
    cout<<"login sukses";
}
return 0;

}
