#include<iostream>
using namespace std;

int main(){
	
	int N,x,ready,not_ready;
	
	not_ready=0;ready=0;
	
	cin>>N;
	
	for(int i=1;i<=N;i++){
		
		cin>>x;
		
		if(x%2==0){
			ready++;
		}else{
			not_ready++;
		}
		
	}
	
	if(not_ready<ready){
		cout<<"READY FOR BATTLE";
	}else{
		cout<<"NOT READY";
	}
	
	return 0;
	
}
