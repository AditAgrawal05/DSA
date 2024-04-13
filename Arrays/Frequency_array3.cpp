#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i  = 0;i<n;i++){
        cin>>arr[i];
    }
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i = 0;i<n;i++){
        if(maxi<arr[i]){
          maxi = arr[i];
        }
        if(mini>arr[i]){
          mini = arr[i];
        }
    }
    int freq[maxi-mini+1] = {0};
    for(int i = 0;i<n;i++){
      int element = arr[i];
      freq[element-mini] = freq[element-mini]+1;
    }
    for(int i = 0;i<maxi-mini+1;i++){
      if(freq[i]>0){
        cout<<i+mini<<" -> "<<freq[i]<<endl;
      }
    }
}