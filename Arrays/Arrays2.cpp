#include<iostream>
using namespace std;
int main(){
    int  a[5]={1,2,3,4,5};
    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<endl;//Without loop printing
    //while
    int i =0;
    while(i<=4){
        cout<<a[i]<<" ";
        i=i+1;
    }
    cout<<endl;
    //for
    for(int i = 0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}