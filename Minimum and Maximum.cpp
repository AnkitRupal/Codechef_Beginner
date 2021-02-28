#include<bits/stdc++.h>
using namespace std;

void input_array(long long int a[],long long int size){
	for(long long int i=0;i<size;i++){
		cin>>a[i];
	}
}

int main(){
	long long int t,n;
	cin>>t;
	
	while(t--){
		cin>>n;
		long long int a[n];
		input_array(a,n);
		long long int cost=0;
		sort(a,a+n);
		cost=a[0]*(n-1);
		cout<<cost<<endl;
	}
	
	return 0;
}
