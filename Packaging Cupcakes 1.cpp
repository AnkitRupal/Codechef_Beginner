#include<iostream>
using namespace std;

int main(){
	
	int t=0,n=0,max,left=INT_MIN,package;
	
	cin>>t;//taking input of the number of test cases
	
	for(int i=1;i<=t;i++){
		
		cin>>n;//taking input of the number of cupcakes
		
		max=INT_MIN;
		
		for(int j=1;j<=n;j++){
			
			left=n%j;//calculating the number of cupcakes left after packaging 'i' cupcakes in each package
			if(max<=left){
				max=left;//updating the maximum value to check for the next iteration whether the next iteration has max left or not
				package=j;//gives the cupcakes the package contains
			}
			
		}
		
		cout<<package<<endl;
		
	}
	
	return 0;
	
}
