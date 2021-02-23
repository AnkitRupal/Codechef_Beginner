#include<iostream>
using namespace std;

int main(){
	
	int N,last_digit,first_digit,no_of_digits;
	
	int temp=N;
	
	cin>>N;
	
	last_digit=N%10;
	
	int i=1;
	
	for(;N!=0;i++){
		
		N=N/10;
		
	}
	
	i--;//to have the no of digits in N
	
	no_of_digits=i;
	
	long long int exp=1;
	
	for(int i=1;i<no_of_digits;i++){
		
		exp=exp*10;
		
	}
	
	first_digit=temp/exp;
	
	cout<<last_digit+first_digit;
	
	return 0;
	
}
