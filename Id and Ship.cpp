#include<iostream>
using namespace std;

int main(){
	
	int t;
	char c;
	
	cin>>t;
	
	for(int i=1;i<=t;i++){
		
		cin>>c;
		
		if(c=='B' || c=='b'){
			cout<<"Battleship"<<endl;
		}
		
		else if(c=='c' || c=='C'){
			cout<<"Cruiser"<<endl;
		}
		
		else if(c=='D' || c=='d'){
			cout<<"Destroyer"<<endl;
		}
		
		else if(c='F' || c=='f'){
			cout<<"Frigate"<<endl;
		}
		
	}
	
	return 0;
	
}
