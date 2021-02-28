#include <bits/stdc++.h>
using namespace std;

bool prime (int n){
    if(n==1){
        return false;
    }
    for(int d=2;d*d<=n;d++){
        if(n%d==0){
            return false;
        }
    }
    return true;
}

int main() {
	
	int t,x,y;
	cin>>t;
	
	while(t--){
	    cin>>x>>y;
	    int n=x+y+1;
	    while(true){
	        if(!prime(n)){
	            break;
	        }
	        n++;
	    }
	    cout<<n-x-y<<endl;
	}
	
	return 0;
}

