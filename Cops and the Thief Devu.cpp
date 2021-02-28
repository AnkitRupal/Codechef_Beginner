#include <bits/stdc++.h>
using namespace std;

void input_array(int a[],int size){
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
}

void search (int a[],int start,int end){
    for(;start<=end;start++){
        a[start]=1;
    }
}

int safe_heaven (int a[],int size){
    int count=0;
    for(int i=0;i<size;i++){
        if(a[i]==0){
            count++;
        }
    }
    return count;
}

int main() {
	
	int t,M,x,y;
	cin>>t;
	
	while(t--){
	    int house[100]={0};
	    cin>>M>>x>>y;
	    int cops[M];
	    input_array(cops,M);
	    for(int i=0;i<M;i++){
	        search(house,max((cops[i]-1)-x*y,0),min((cops[i]-1)+x*y,100));
	    }
	    cout<<safe_heaven(house,100)<<endl;
	}
	
	return 0;
}

