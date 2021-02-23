#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	unsigned int withdrawal;
	double balance;
	
	cin>>withdrawal;
	cin>> balance;
	
	if( withdrawal%5==0 && abs(balance-withdrawal+0.50)>=1e-19 ){
		
		balance=balance-withdrawal-0.50;
		
		cout<<fixed<<setprecision(2)<<balance;
		
	}else{
		
		cout<<fixed<<setprecision(2)<<balance;
		
	}
	
	return 0;
	
}
