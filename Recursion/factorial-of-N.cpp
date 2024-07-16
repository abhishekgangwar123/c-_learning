// cod eto find the factorial of n numbers:-

#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0){
    return 1;
    }

    return n *factorial(n-1);
}

int main(){
    int n;
    cout<<"enter the number:-"<<endl;
    cin>>n;
    cout<< "factorial of"<< n << "number is "<< factorial(n)<<endl;
    return 0;
}