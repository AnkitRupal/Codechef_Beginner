#include<iostream>
using namespace std;

int main(){
	
	int t,N,rem,reverse=0,temp;
	cin>>t;//taking the input of the number of test cases
	
	for(int i=1;i<=t;i++){
		
		cin>>N;//taking the input of the number
		
		temp=N;
		
		reverse=0;
		
		for(;N!=0;N=N/10){
			
			rem=N%10;
			reverse=10*reverse+rem;
			
		}
		
		if(reverse==temp){
			
			cout<<"The number: "<<temp<<" is equal to its reverse: "<<reverse<<endl;
			
		}else{
			
			cout<<"The number: "<<temp<<" is not equal to its reverse: "<<reverse<<endl;
			
		}
		
	}
	
	return 0;
	
}
