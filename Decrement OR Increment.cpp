#include<iostream>
using namespace std;

int main(){
	
	int N;
	cin>>N;//taking the input of the number from the user
	
	if(N%4==0){
		
		N++;
		
	}else{
		
		N--;
		
	}
	
	cout<<N<<endl;
	
	return 0;
	
}
