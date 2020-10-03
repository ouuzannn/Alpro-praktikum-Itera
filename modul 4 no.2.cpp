#include <iostream>
using namespace std;

int main () {
    string p="qwerty";
    int i;
    cout<<"masukkan password :";
    cin>>p;
    for(i=1; i<=3; i++){
        if(i==1&&p!="qwerty"){
            cout<<"password salah"<<endl;
            cout<<"masukkan lagi :";
            cin>>p;
        }
        else if(i==2&&p!="qwerty"){
            cout<<"password yang anda masukkan salah"<<endl;
            cout<<"masukkan lagi :";
            cin>>p;
        }
        else if(i==3&&p!="qwerty"){
            cout<<"password yang anda masukkan salah, maaf akun anda diblokir";
        }
        else{
            cout<<"password benar !"; break;
    }
}
return 0;
}
