#include<iostream>
using namespace std;

int main(){
	
	int n,x,rem2,rem1,rem,result;
	
	rem1=0;rem2=0;result=0;
	
	cin>>n;
	
	for(int i=1;i<=n;i++){
		
		cin>>x;
		
		rem1=x%10;
		
		for(;x>0;){
			
			rem=x%10;
			result=result*10+rem;
			x=x/10;
			
		}
		
		rem2=result%10;
		
		cout<<rem1+rem2<<endl;
		
	}
	
	return 0;
	
}
