#include <iostream>
using namespace std;

void input(int a[],int size){
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
}

int main() {
	
	int t;
	cin>>t;
	int a[4]={0};
	
	while(t--){
	    input(a,4);
	    if(a[0]==a[1]==a[2]==a[3]){
	        cout<<"YES"<<endl;
	    }else if(a[0]==a[1] && a[2]==a[3]){
	        cout<<"YES"<<endl;
	    }else if(a[0]==a[2] && a[1]==a[3]){
	        cout<<"YES"<<endl;
	    }else if(a[0]==a[3] && a[1]==a[2]){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	
	return 0;
}

