#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void input_array(int a[],int size){
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
}

int min_index(int x,int y,int count,int i){
	if(x>y){
		return i;
	}else{
		return count;
	}
}

int main(){
	int t,n;
	cin>>t;
	
	while(t--){
		cin>>n;
		int a[n],count=0;
		unsigned long long int cost=0;
		input_array(a,n);
		for(int i=1;i<n;i++){
			count=min_index(a[count],a[i],count,i);
			cost+=a[count];
		}
		cout<<cost<<endl;
	}
	
	return 0;
}
