#include <bits/stdc++.h>
using namespace std;

void freq_calc (char arr[],int start , int end, int freq[]){
    for(int i=start;i<end;i++){
        freq[arr[i]]++;
    }
}

bool isequal(int arr1[],int arr2[],int len){
    for(int i=0;i<len;i++){
        if(arr1[i]!=arr2[i]){
            return false;
        }
    }
    return true;
}

int main() {
	int t,mid;
	cin>>t;
	
	char str[1000];
	
	while(t--){
	    cin>>str;
	    int freq1[255]={0};
		int freq2[255]={0};
	    int len=strlen(str);
	    if (len%2==1) {
	        mid=len/2;
	        freq_calc(str,0,mid,freq1);
	        freq_calc(str,mid+1,len,freq2);
	        if(isequal(freq1,freq2,255)){
	            cout<<"YES"<<endl;
	        }else{
	            cout<<"NO"<<endl;
	        }
	    }else{
	        mid=len/2;
	        freq_calc(str,0,mid,freq1);
	        freq_calc(str,mid,len,freq2);
	        if(isequal(freq1,freq2,255)){
	            cout<<"YES"<<endl;
	        }else{
	            cout<<"NO"<<endl;
	        }
	    }
	}
	
	return 0;
}

