#include <bits/stdc++.h>
using namespace std;

void input_array(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

double dist(int x1,int y1,int x2,int y2){
    double ans=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    return ans;
}

int main() {
	
	int t,range,X,Y,i=0;
	double d12=0,d23=0,d31=0;
	cin>>t;
	int coordinates[6];
	
	while(t--){
	    cin>>range;
	    input_array(coordinates,6);
	    d12=dist(coordinates[0],coordinates[1],coordinates[2],coordinates[3]);
	    d23=dist(coordinates[2],coordinates[3],coordinates[4],coordinates[5]);
	    d31=dist(coordinates[0],coordinates[1],coordinates[4],coordinates[5]);
	    if(d12<=range && d23<=range){
	        cout<<"yes"<<endl;
	    }else if(d23<=range && d31<=range){
	        cout<<"yes"<<endl;
	    }else if(d31<=range && d12<=range){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	
	return 0;
}

