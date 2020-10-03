#include <iostream>
using namespace std;
int segitiga(int s1, int s2){
    int luas;
    luas=(s1*s2)/2;
    return luas;
}
float lingkaran(int s1){
    float luas;
    luas=(s1*s1*22)/7;
    return luas;
}
int persegipanjang(int s1, int s2){
    int luas;
    luas=s1*s2;
    return luas;
}
int main (){
    string bangun;
    int s1,s2;
cout<<"masukkan jenis bangun datar :";
cin>>bangun;
    if(bangun=="segitiga"){
    cin>>s1;
    cin>>s2;
    cout<<segitiga(s1,s2);
}
    else if(bangun=="lingkaran"){
    cin>>s1;
    cout<<lingkaran(s1);
}
    else if(bangun=="persegipanjang"){
    cin>>s1;
    cin>>s2;
    cout<<persegipanjang(s1,s2);
}
    else{
        cout<<"invalid";
    }
}
