#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    for(int i=1;i<n;i++ ){
        int a;
        cin>>a;
        sum+=a;
    }
    int missing = 0;
    for(int i = 1;i<=n;i++){
        missing+=i;
    }
    cout<<missing-sum;
}