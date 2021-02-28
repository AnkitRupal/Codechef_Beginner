#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t,n,m,k;
	cin>>t;
	
	while(t--){
	    cin>>n>>m>>k;
	    if(n==m){
	        cout<<"0"<<endl;
	    }else if(abs(n-m)<=k){
	        cout<<"0"<<endl;
	    }else{
	        cout<<abs(n-m)-k<<endl;
	    }
	}
	
	return 0;
}

