#include<iostream>
using namespace std;

int main(){
	
	//taken input of the number of test cases
	int t;
	cin>>t;
	
	//array of the 2's power
	int power2[12]={1,2,4,8,16,32,64,128,256,512,1024,2048};
	
	//loop for the number of test cases
	for(int j=1;j<=t;j++){
		
		//amount of bill tomya likes to pay
		int n;
		cin>>n;
		
		//initialising count variable
		int count=0;
		
		while(n!=0){
			
			for(int i=11;i>0;i--){
				if(n%power2[i]!=n){
					count+=(n/power2[i]);
					n=n%power2[i];
					break;
				}
			}
			
		}
		
		cout<<count<<endl;
		
	}
	
	return 0;
	
}
