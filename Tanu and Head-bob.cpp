#include <iostream>
using namespace std;

int main() {
	
	int t,n;
	cin>>t;
	
	bool Y=false,N=false,I=false;
	
	while(t--){
	    Y=false;N=false;I=false;
	    cin>>n;
	    char str[n+1];
	    cin>>str;
	    for(int i=0;i<n;i++){
	        if(str[i]=='Y'){
	            Y=true;
	        }
	        if(str[i]=='N'){
	            N=true;
	        }
	        if(str[i]=='I'){
	            I=true;
	        }
	    }
	    if(Y){
	        cout<<"NOT INDIAN"<<endl;
	    }else if(I){
	        cout<<"INDIAN"<<endl;
	    }else if(!Y && !I && N){//this condition is not necesary!!
	        cout<<"NOT SURE"<<endl;
	    }
	}
	
	return 0;
}

