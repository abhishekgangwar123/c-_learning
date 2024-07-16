// code to print the name N times

#include<iostream>
using namespace std;

void func(int i, int n){
    if(i>n)
    return;
    cout<< "Abhishek"<< endl;

    func(i+1,n);

}

int main(){
    int n = 5;
    func(1,n);
    return 0;
}