#include<bits/stdc++.h>
using namespace std;

unsigned long long int sum(unsigned long long int n){
	unsigned long long int ans=0;
	for(int i=1;i<=n;i++){
		ans+=i;
	}
	return ans;
}

int main() {
	
	int t,n;
	cin>>t;
	unsigned long long int row=0;
	
	while(t--){
		cin>>n;
		row=(n/2)-1;
		cout<<sum(row)<<endl;
	}
	
	return 0;
}
