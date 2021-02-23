#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,hardness,tensile_strength;
	double carbon;
	cin>>t;
	
	bool N1=false,N2=false,N3=false;
	
	while(t--){
		N1=false;N2=false;N3=false;
		cin>>hardness>>carbon>>tensile_strength;
		//checking the conditions
		if(hardness>50){
			cout<<"1"<<endl;
			N1=true;
		}
		if(carbon<0.7){
			cout<<"2"<<endl;
			N2=true;
		}
		if(tensile_strength>5600){
			cout<<"3"<<endl;
			N3=true;
		}
		//grading the steel and printing the value
		if(N1*N2*N3==1){
			cout<<"10"<<endl;
		}else if(N1*N2==1){
			cout<<"9"<<endl;
		}else if(N2*N3==1){
			cout<<"8"<<endl;
		}else if(N1*N3==1){
			cout<<"7"<<endl;
		}else if(N1+N2+N3==1){
			cout<<"6"<<endl;
		}else{
			cout<<"5"<<endl;
		}
	}
	
	return 0;
}
