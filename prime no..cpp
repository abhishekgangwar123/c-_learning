#include<iostream>
using namespace std;
int main(){
	int n,i,m=0;
	cin>>n;
	m=n/2;
	for(i=2;i<=m;i++){
			if(n%2==0){
				cout<<"this is not a pm";
				break;
		}
	}
	if(n%2!=0){
		cout<<"this is a pm";
	}

}
