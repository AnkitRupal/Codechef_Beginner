#include<iostream>
#include<cmath>
using namespace std;

unsigned long long int square_root (double x){
	
	double sqrt_double=0;
	
	unsigned long long int sqrt_int=0;
	
	sqrt_double=sqrt(x);//findingn the sqaure root of the argument,which is in double
	
	sqrt_int=sqrt_double;//rounding dwon the result to nearest integer which is below the result
	
	cout<<sqrt_int<<endl;//printing the rounded down integeral result
	
	return sqrt_int;
	
}

int main(){
	
	int t=0;
	
	double x=0;
	
	cin>>t;//taking the input of the number of test cases\
	
	for(int i=1;i<=t;i++){
		
		cin>>x;
		
		square_root(x);
		
	}
	
	return 0;
	
}
