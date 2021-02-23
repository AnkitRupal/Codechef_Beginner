#include<iostream>
using namespace std;

unsigned long long int occurrence (unsigned long long int x){
	
	unsigned long long int no_of_four=0;
	for(int rem=0;x>0;x=x/10){
		
		rem=x%10;
		if(rem==4){
			
			no_of_four++;
			
		}
		
	}
	
	cout<<no_of_four<<endl;
	
	return no_of_four;
	
} 

int main(){
	
	unsigned long long int t=0,x=0;
	
	cin>>t;
	
	for(int i=1;i<=t;i++){
		
		cin>>x;
		
		occurrence(x);
		
	}
	
	return 0;
	
}
