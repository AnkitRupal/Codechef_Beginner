#include<iostream>
using namespace std;

bool prime (int n){
	
	for(int d=2;d*d<=n;d++){
		
		if(n%d==0){
			return false;	
		}
		
	}
	
	return true;
	
}

int main(){
	
	int t=0,n=0;
	
	cin>>t;
	
	for(int i=1;i<=t;i++){
		
		cin>>n;
		
		if(n==1){
			cout<<"no"<<endl;
			continue;
		}
		
		if (prime(n)){
			cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
		}
		
	}
	
	return 0;
	
}
