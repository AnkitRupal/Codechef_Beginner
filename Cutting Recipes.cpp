#include<bits/stdc++.h>
using namespace std;

void input_array (int arr[], int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void print_array(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    
    int t,n,gcd;
    cin>>t;
    
    while(t--){
       cin>>n;
       int arr[n];
       input_array(arr,n);
       //finding the gcd  of the whole  array
       gcd=__gcd(arr[0],arr[1]);
       for(int i=2;i<n;i++){
           gcd=__gcd(gcd,arr[i]);
       }
       //getting the minimum recipe in whole numbers
        for(int i=0;i<n;i++){
           arr[i]=arr[i]/gcd;
        }
       print_array(arr,n);
    }
    
    return 0;
}
