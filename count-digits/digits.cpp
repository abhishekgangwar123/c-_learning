#include<iostream>
using namespace std;

int countDigits(int n){
    int cnt = 0;
    while(n>0){
        cnt =cnt+1;
        n=n/10;
    }
    return cnt;
}

int main(){
    int n = 2569874;
    cout<< "n: "<<n<<endl;
    int digits = countDigits(n);
    cout<<"number of digits in number: "<< digits<<endl;
    return 0;
}