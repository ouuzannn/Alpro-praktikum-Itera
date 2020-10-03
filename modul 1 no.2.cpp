#include <iostream>
using namespace std;

int main () {
    int a,b,c;
cout<<"nilai 1 :";
cin>>a;
cout<<"nilai 2 :";
cin>>b;
cout<<"nilai 3 :";
cin>>c;
if (a>b&&a>c){
    cout<<"nilai tertinggi adalah"<<a;
}
else if (b>a&&b>c){
    cout<<"nilai tertinggi adalah"<<b;
}
else{
    cout<<"nilai tertinggi adalah "<<c;
}
return 0;
}
