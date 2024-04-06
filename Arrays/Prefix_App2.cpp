#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int diff[100005]={0};
    for(int i = 1;i<=k;i++){
        int l,r,d;
        cin>>l>>r>>d;
        diff[r+1] = diff[r+1]-d;
        diff[l] = diff[l]+d; 
    }
    for(int i = 1;i<n;i++){
        diff[i] = diff[i-1]+diff[i];
    }
    for(int i = 0;i<n;i++){
        arr[i] = arr[i]+diff[i];
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}