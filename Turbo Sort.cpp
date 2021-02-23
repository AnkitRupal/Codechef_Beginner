#include <bits/stdc++.h>
using namespace std;

void print_array(int arr[],int size){
    for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
}
}

void input_array (int arr[],int size) {
    int x;
    for(int i=0;i<size;i++){
        cin>>x;
        arr[i]=x;
    }
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    
    input_array(arr,size);
    
    sort(arr, arr + size);
    
    print_array(arr,size);
    
}
