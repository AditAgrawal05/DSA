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
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(i+j==k){
                cout<<i<<" and "<<j<<endl;
            }
            else{
                continue;
            }
        }
    }
}