#include <iostream>
using namespace std;

int main (){
    int angka;
cout<<"input angka :";
cin>>angka;
switch(angka){
    case 1 : cout<<"januari"; break;
    case 2 : cout<<"febuari"; break;
    case 3 : cout<<"maret"; break;
    case 4 : cout<<"april"; break;
    case 5 : cout<<"mei"; break;
    case 6 : cout<<"juni"; break;
    case 7 : cout<<"juli"; break;
    case 8 : cout<<"agustus"; break;
    case 9 : cout<<"september"; break;
    case 10 : cout<<"oktober"; break;
    case 11 : cout<<"november"; break;
    case 12 : cout<<"desember"; break;
    default : cout<<"masukkan angka 1-10 saja"; break;
}
return 0;
}
