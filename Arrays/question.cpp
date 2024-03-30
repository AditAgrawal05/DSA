#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	int q;
	int start,end;
	for(int i =0;i<n;i++){
		cin>>arr[i];
		}
    cin>>q;
	for(int i = 1;i<=q;i++){
	  cin>>start>>end;
	  int sum = 0;
	  for(int j = start;j<=end;j++){
	    sum = sum+ arr[j];
	  }
	  cout<<sum<<endl;
	}
	
}