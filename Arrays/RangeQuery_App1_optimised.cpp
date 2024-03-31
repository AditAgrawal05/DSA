//Given q Query print sum of array from [l,r] but Computation less than n*q
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	int q;
	int start,end;
    int pre[n];
    int sum = 0;
	for(int i =0;i<n;i++){
		cin>>arr[i];
        sum +=arr[i];
        pre[i] = sum;
		}
    cin>>q;
	for(int i = 1;i<=q;i++){
	  cin>>start>>end;
	  if (start ==0){
        cout<<pre[end]<<endl;

      }else{
        cout<<pre[end]-pre[start-1]<<endl;
      }
	}
	
}
//computation = n+q