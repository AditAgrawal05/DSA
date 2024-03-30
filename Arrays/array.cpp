#include<iostream>
using namespace std;
int main(){
    int y =100;//Copy Assignment Initialization
    //int x{100}; //Direct Initialization
    //int m = 35.7; //narrow conversion of data
    //int n{35.7}; //Narrowing Conversion in Direct Initialization
    int z = {200};//Copy List Initialization
    
    int  a[5]={1,2,3,4,5}; // Direct List Initialization for Arrays
    int b[5] = {1,2,3}; // Copy List Initialization for Arrays
    //a+0: address of base  element of array or first bucket
    //[]: value of operator. helps you fetch value from the array using index
    //a[2]:a.operator[](2)
    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<endl;
    int p;//uninitialised variable
}
