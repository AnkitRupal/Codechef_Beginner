#include<bits/stdc++.h>
using namespace std;

int main(){
	
	unsigned long long int t=1,n=1;
	cin>>t;
	
	while(t--){
		cin>>n;
		long long int row=(sqrt(8*n+1)-1)/2;
		cout<<row<<endl;
	}
	
	return 0;
}
