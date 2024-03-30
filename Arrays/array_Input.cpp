#include<iostream>
using namespace std;
int main(){
    int n;//reading size of array
    cin>>n;
    int arr[n];//making array of size n
    for(int i=0;i<n;i++){
        cin>>arr[i];//reading elements of the array
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";//printing elements of the array
    }
}