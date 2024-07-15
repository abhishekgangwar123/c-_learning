#include<iostream>
using namespace std;
int main(){
	int n,r, temp,sum=0;
	cout<<"Enter the no.";
	cin>> n;
	temp=n;
	while(n>0){
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum){
		cout<<"this is palindrome";
	}
	else{
		cout<<"it is not a palindrome";
	}
	
}



