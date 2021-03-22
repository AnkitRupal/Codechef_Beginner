#include<bits/stdc++.h>
using namespace std;

bool check(int freq[]){
    int sum=0;
	for(int i=0;i<256;i++){
		sum+=freq[i];
	}
	for(int i=0;i<256;i++){
	    if(freq[i]==sum-freq[i]){
	        return true;
	    }
	}
	return false;
}

int main(){
	int t;
	cin>>t;
	char str[1000];
	while(t--){
		cin>>str;
		int freq[256]={0},len=strlen(str);
		for(int i=0;i<len;i++){
			freq[str[i]]++;
		}
		if(check(freq)){
		    cout<<"YES"<<endl;
		}else{
		    cout<<"NO"<<endl;
		}
	}
	return 0;
}
/*
Some more test cases for your code:
INPUT:
2
aaaaaaaaaahnkgvhkfg
aaaaaaaaaaaaaaaaaaaaaaaaaqwertyuiopsdfghjklzxcvbnm
OUTPUT:
NO
YES
*/
