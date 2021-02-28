#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	char s[150];
	
	while(t--){
		cin>>s;
		int len=strlen(s),amber=0,brass=0;
		for(int i=0;i<len;i++){
			if(s[i]=='a'){
				amber++;
			}else{
				brass++;
			}
		}
		cout<<min(amber,brass)<<endl;
	}
		
	return 0;
}
