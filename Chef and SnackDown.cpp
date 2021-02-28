#include <iostream>
using namespace std;

void is_conducted(int n){
    if(n==2010){
        cout<<"HOSTED"<<endl;
    }else if(n==2015){
        cout<<"HOSTED"<<endl;
    }else if(n==2016){
        cout<<"HOSTED"<<endl;
    }else if(n==2017){
        cout<<"HOSTED"<<endl;
    }else if(n==2019){
        cout<<"HOSTED"<<endl;
    }else{
        cout<<"NOT HOSTED"<<endl;
    }
}

int main() {
	
	int t,n;
	cin>>t;
	
	while(t--){
	    cin>>n;
	    is_conducted(n);
	}
	
	return 0;
}

