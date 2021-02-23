#include<iostream>
using namespace std;

int main(){
	
	int a,b,c,t=0;
	
	cin>>t;//taking the input of the test cases the user wants to test
	
	for(int i=1;i<=t;i++){
	
		cin>>a>>b>>c;//taking input of the 3 numbers from the user
		
		//checking which is the second largest number out of the three
		
		if(a>b){
			if(b>c){
				cout<<b<<endl;
			}else{
				if(a>c){
					cout<<c<<endl;
				}else{
					cout<<a<<endl;
				}
			}
		}else{
			if(a>c){
				cout<<a<<endl;
			}else{
				if(b>c){
					cout<<c<<endl;
				}else{
					cout<<b<<endl;
				}
			}
		}
		
}
	
	return 0;
	
}
