#include<iostream>
#include<climits>
int freq[1000] = {0};
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i  = 0;i<n;i++){
        cin>>arr[i];
    }
    int ans = INT_MIN;
    for(int i = 0;i<n;i++){
        if(ans<arr[i]){
            ans = arr[i];
        }
    }
    
    for(int i = 0;i<n;i++){
      int element = arr[i];
      freq[element] = freq[element]+1;
    }
    for(int i = 0;i<ans+1;i++){
      if(freq[i]>0){
        cout<<i<<" -> "<<freq[i]<<endl;
      }
    }
}