#include <iostream>
using namespace std;

int main(){

int a,b,c;
cout<<"Enter 1st Number:-";
cin>>a;
cout<<"Enter 2nd Number:-";
cin>>b;
cout<<"Enter 3rd Number:-";
cin>>c;


if(a>b){
    if(a>c){
        cout<<a<<endl;
    }
    else{
        cout<<c<<endl;
    }
}
else{
    if(b>c){
        cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        } 
    }

    return 0;
}