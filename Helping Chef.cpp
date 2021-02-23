#include<iostream>
using namespace std;

int main() {
	
	int t=0,n=0;
	
	cin>>t;//taking the input of the total nhumber of test cases 
	
	for(int i=1;i<=t;i++){
		
		cin>>n;//takling the input of the number chef has given
		
		if(n<10){//checking hwether the chef has entered a number l;ess than 10 or not. If yes then print something else we print -1.
			
			cout<<"Thanks for helping Chef!"<<endl;
			
		}else{
			
			cout<<"-1"<<endl;
			
		}
		
	}
	
	return 0;
	
}
