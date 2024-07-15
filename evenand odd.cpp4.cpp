#include<iostream>
using namespace std;
int main(){
	int n,i;
	cin>> n;
	for(i=2;i<=n;i++){
			if(i%2==0){  // i= element , here we are checking even no. by dividing i by 2 = 0. If its satisfied then is even no.
		cout<<"it is an even no."<< endl;
		}
		else{
		cout<<"it is odd no."<<endl;
		}
		
	}
}
