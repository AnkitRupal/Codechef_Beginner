#include <bits/stdc++.h>
using namespace std;

void set_zero(int a[],int size){
    for(int i=0;i<size;i++){
        a[i]=0;
    }
}

int sum (int a[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans+=a[i];
    }
    return ans;
}

int main() {
	
	int n,k,x;
	cin>>n>>k;
	int a[n]={0};
	string str;
	
	while(k--){
	    cin>>str;
	    if(str=="CLICK"){
	        cin>>x;
	        if(a[x-1]){
	            a[x-1]=0;
	        }else{
	            a[x-1]=1;
	        }
	    }else{
	        set_zero(a,n);
	    }
	    cout<<sum(a,n)<<endl;
	}
	
	return 0;
}

