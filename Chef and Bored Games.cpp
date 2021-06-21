/*
*   AUTHOR : Ankit Rupal
*   Chef and Bored Games
*/

#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define nl '\n'
#define pb push_back
#define ppb pop_back
#define vi vector<int>
#define mod 1000000007

void input_array(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void print_array(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int ans=0;
        for(int i=1;i<=n;i+=2){
            ans+=(n-i+1)*(n-i+1);
        }
        cout<<ans<<'\n';
    }
    return 0;
}