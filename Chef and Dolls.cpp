#include <bits/stdc++.h>
using namespace std;

void input_array(int a[],int size){
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
}

int check (int a[],int n){
    for(int i=0,j=1;i<n-1;i+=2,j+=2){
        if(a[i]!=a[j]){
            return a[i];
        }
    }
    return a[n-1];
}

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    input_array(a,n);
	    sort(a,a+n);
	    cout<<check(a,n)<<endl;
	}
	return 0;
}

