#include<iostream>
using namespace std;

int main(){
	
	//taken input of the number of test cases
	int t;
	cin>>t;
	
	//array giveing the number of denominations available
	int arr[6]={1,2,5,10,50,100};
	
	for(int i=1;i<=t;i++){
		
		//taken the input of the number
		int n;
		cin>>n;
		//initialising the count variable to count the number of notes
		int count=0;
		
		for(int j=5;n!=0;j--){
			if(n%arr[j]!=n){
				count+=(n/arr[j]);
				n=n%arr[j];
			}
		}
		cout<<count<<endl;
	}
	
	return 0;
	
}
