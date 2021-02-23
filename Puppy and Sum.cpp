#include<iostream>
using namespace std;

unsigned long long int sum(int n){
	unsigned long long int ans=1;
	for(int i=2;i<=n;i++){
		ans+=i;
	}
	return ans;
}

int main(){
	
	int t,d,n;
	unsigned long long int ans;
	cin>>t;
	
	while(t--){
		cin>>d>>n;
		ans=sum(n);
		for(int i=2;i<=d;i++){
			ans=sum(ans);
		}
		cout<<ans<<endl;
	}
	
	return 0;
}
