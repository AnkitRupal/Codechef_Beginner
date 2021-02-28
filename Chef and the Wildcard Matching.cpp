#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    char str1[15],str2[15];
    
    while(t--){
        cin>>str1>>str2;
        int len=strlen(str1);
        bool equal=true;
        for(int i=0;i<len;i++){
            if(str1[i]!='?' && str2[i]!='?'){
                if(str1[i]!=str2[i]){
                    cout<<"No"<<endl;
                    equal=false;
                    break;
                }
            }
        }
        if(equal){
            cout<<"Yes"<<endl;
        }
    }
    
	return 0;
}

