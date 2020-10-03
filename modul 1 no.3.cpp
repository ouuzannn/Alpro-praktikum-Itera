#include <iostream>
using namespace std;

int main () {
float ipk;
float kerja;

cout<<"masukkan ipk :";
cin>>ipk;
cout<<"masukkan pengalaman kerja :";
cin>>kerja;
if (ipk>3.5&&kerja>=2){
    cout<<"selamat anda diterima sebagai cleaning service";
}
else if (ipk>3.5&&kerja<2){
    cout<<"pengalaman kerja kurang lama, anda akan di interview terlebih dahulu";
}
else{
    cout<<"maaf, anda tidak memenuhi syarat ";
}
return 0;
}
