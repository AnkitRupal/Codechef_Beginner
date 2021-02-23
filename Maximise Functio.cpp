#include<bits/stdc++.h>
using namespace std;

void input_array (int input[],int size){
	for(int i=0;i<size;i++){
		cin>>input[i];
	}
}

int main(){
	
	int t,n;
	cin>>t;//taking input of the total numbber of test cases
	
	while(t--){
		
		cin>>n;//taking input of the size of the array
		int input[n];
		input_array(input,n);//taking input of the array
		
		sort(input,input+n);//sorting the array in increasing order
		
		/*
		LOGIC:-
		f(x,y,z)=|g(x)-g(y)|+|g(y)-g(z)|+|g(x)-g(x)|as a function. if we assume for a moment x<y<z the the function changes to f(x,y,z)=2(g(z)-g(x)).
		it is very easy to maximise this function!!  just put maximum value of g in place of z and ,minimum value in place in place of x!! Since the value
		will remain unchanged for hatsoever the value of x,y or z be assigned. Thus, we can safely  say that we have the maximum value with us in this way!!
		*/
		
		cout<<2*(input[n-1]-input[0]);
	}
	
	return 0;
}
