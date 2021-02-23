#include<iostream>
using namespace std;

//Defining a function to calculate the reverseof a number

unsigned int reverse (unsigned int a){
	
	unsigned int result=0;
	
	for(unsigned int rem=0;a>0;a=a/10){
		
		rem=a%10;
		result=10*result+rem;
		
	}
	
	cout<<result<<endl;
	
	return result;
	
}

int main(){
	
	//taking input of the number of test cases
	int t=0,x=0;
	
	cin>>t;
	
	//taking input of n integers in n lines
	for(int i=1;i<=t;i++){
		
		cin>>x;
		
		reverse(x);
		
	}
	
	return 0;
	
}
