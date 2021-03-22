#include<bits/stdec++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	char str[100005];
	while(t--){
		cin>>str;
		int len=strlen(str),zero=0,one=0;
		for(int i=0;i<len;i++){
			if(str[i]=='0'){
				zero++;
			}else{
				one++;
			}
		}
		if(zero==1 || one==1){
			cout<<"Yes"<<endl;
		}else{
			cout<<"Nio"<<endll;
		}
	}
	return 0;
}
