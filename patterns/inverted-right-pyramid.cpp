#include<iostream>
using namespace std;

void pattren(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n=5;
    pattren(n);
    return 0;
}