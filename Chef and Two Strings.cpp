#include <bits/stdc++.h>
using namespace std;

int count_ques_ques(char str1[],char str2[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        if(str1[i]=='?' && str2[i]=='?'){
            ans++;
        }
    }
    return ans;
}

int count_ques_char(char str1[],char str2[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        if(str1[i]=='?' && str2[i]!='?'){
            ans++;
        }else if(str1[i]!='?' && str2[i]=='?'){
            ans++;
        }
    }
    return ans;
}

int count_char_char(char str1[],char str2[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        if(str1[i]!='?' && str2[i]!='?'){
            if(str1[i] != str2[i]){
                ans++;
            }
        }
    }
    return ans;
}

int main() {
	
	int t,len=0,count1=0,count2=0,count3=0;
	cin>>t;
	char str1[200],str2[200];
	
	while(t--){
	    cin>>str1>>str2;
	    len=strlen(str1);
	    count1=count_ques_ques(str1,str2,len);
	    count2=count_ques_char(str1,str2,len);
	    count3=count_char_char(str1,str2,len);
	    cout<<count3<<" "<<count1+count2+count3<<endl;
	}
	
	return 0;
}

