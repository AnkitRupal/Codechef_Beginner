#include <bits/stdc++.h>
using namespace std;

void input_array(int a[],int size){
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
}

int main() {
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    int a[n];
	    input_array(a,n);
	    for(int i=0;i<n;i++){
	        k-=a[i];
	        if(k>=0){
	            cout<<"1";
	        }else{
	            cout<<"0";
	            k+=a[i];
	        }
	    }
	    cout<<endl;
	}
	return 0;
}

