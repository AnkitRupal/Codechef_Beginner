#include<bits/stdc++.h>
using namespace std;

int main(){
	
	unsigned long long int t,a,b;
	unsigned long long int lcm=1,gcd=1;
	cin>>t;
	
	while(t--){
		cin>>a>>b;
		cout<<__gcd(a,b)<<" "<<(a*b)/(__gcd(a,b))<<endl;
	}
	
	return 0;
}
