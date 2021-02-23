#include<iostream>
using namespace std;

int main(){
	
	/*
	We need to find the max and min number of times the chef has entered the building!!
	Just remember , just focus on the min and max and nothing in between
	Minimum:
	We will find the minimum by the largest of the two inputs.
	this is because one guard has noted down the entry of chef when the other was asleep
	thus in this case, chef entered the building only when both were awake and when only one was asleep and never tried to entered when the first guard was asleep
	MAXIMUM:
	note: there will exist a case when chef enteres when guard 1 was asleep and then guard 2 was asleep , this case there is no surety of how many times chef entered
	the building but for the maximum number of times we can assume that chef entered the building only when guard 1 was awake and then only when guard 2 was awake
	thus gives the maximum by the sum of the inputs
	*/
	
	int t,A,B,min,max;
	
	cin>>t;
	
	for(int i=1;i<=t;i++){
		
		cin>>A>>B;
		
		if(A>B){
			min=A;
		}else{
			min=B;
		}
		
		max=A+B;
		
		cout<<min<<" "<<max<<endl;
		
	}
	
	return 0;
	
}
