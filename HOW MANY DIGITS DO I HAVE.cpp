#include <iostream>
using namespace std;

int main() {
	int N,count=0;
	cin>>N;
	if(N==0){
	    cout<<"1"<<endl;
	}
	while(N!=0){
	    N=N/10;
	    count++;
	}
	if(count==1){
	    cout<<"1"<<endl;
	}else if(count==2){
	    cout<<"2"<<endl;
	}else if(count==3){
	    cout<<"3"<<endl;
	}else if(count>3){
	    cout<<"More than 3 digits"<<endl;
	}
	return 0;
}

