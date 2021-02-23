#include<bits/stdc++.h>
using namespace std;

int max(int n,int k){
	int max=INT_MIN;
	for(int i=1;i<=k;i++){
		if(max<(n%i)){
			max=(n%i);
		}
	}
	return max;
}

int main() {
	
	int t,n,k;
	cin>>t;
	
	while(t--){
		cin>>n>>k;
		cout<<max(n,k)<<endl;
	}
	
	return 0;
}
