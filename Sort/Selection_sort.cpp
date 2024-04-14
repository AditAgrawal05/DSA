#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    //taking input of array elements
    for(int i  = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n-1;i++){
        int  min_index=i;//assuming  first element is the smallest one
        for(int j = i+1;j<n;j++){
            if(arr[min_index] > arr[j]){//findiing the  minimum element in the remaining part of the array.
                min_index=j;
            }
        }
        //swap the element at index 'i' with the minimum element in the remaining part of the array.
        if(min_index!=i){//optional to write if you cann just do swapping without checking this condition but computations will be more.
            int temp = arr[min_index];
            arr[min_index]=arr[i];
            arr[i]=temp;
        }
        //cout<<arr[i]<<" ";
    }
    //cout<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
