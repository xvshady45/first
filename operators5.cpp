#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n%2 ==0 && n%3==0){
        cout<<"divisible by both"<<endl;
    }
    else if(n%2==0){
        cout<<"divisible by only 2"<<endl;    
    }
    else if(n%3==0){
        cout<<"divisible by only 3"<<endl;
    }
    else{
        cout<<"divisible by none"<<endl;
    }
return 0;    
}