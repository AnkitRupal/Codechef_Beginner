#include<iostream>
using namespace std;

int main (){
	
	int A=0,B=0,C=0,t=0;
	
	cin>>t;//taking the input of the total number if test cases
	
	for(int i=1;i<=t;i++){
		
		cin>>A>>B>>C;
		
		if(A+B+C==180){
			
			cout<<"YES"<<endl;
			
		}else{
			
			cout<<"NO"<<endl;
			
		}
		
	}
	
	return 0;
	
}
