#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cout<<"a";
    cin>> a;
    cout<<"b";
    cin>> b;

    c=a;
    a=b;
    b=c;

    d=a+c;
    cout<< d;
    return 0;


}