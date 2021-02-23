#include<iostream>
using namespace std;

int main()
{
	
	unsigned int n,k,no_div,j;
	no_div=0;
	
	cin>>n>>k;
	
	for(int i=1;i<=n;i++){
		
		cin>>j;
		
		if(j%k==0){
			
			no_div++;
			
		}
		
	}
	
	cout<<no_div;
	
}
