// code to find the sum of first N natural numbers:-

#include<iostream>
using namespace std;

void solve(int n){
    int sum = 0;
    for (int i=0;i<=n;i++){
        sum += i;
    }
    cout<< "the sum the first "<<n<< " number is : "<< sum << endl;
}

int main(){
    solve(5);
    solve(6);
}