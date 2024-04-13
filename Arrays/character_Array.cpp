#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch[n];
    //1st type of input
    for(int i = 0;i<n;i++){
        cin>>ch[i];
    }
    for(int i = 0;i<n;i++){
        cout<<ch[i];
    }
    cout<<endl;
    //2nd type of input
    char ch1[n];
    cin>>ch1;
    cout<<ch1<<endl;
    cout<<ch1[3];
    //initialisation 1
    char c[] = {'a','b','c','\0'};
    cout<<c<<endl;
    //initialisation 2
    char c1[] = {'adit\0'};
    cout<<c1<<endl;
    //if you want to take a whole line input
    char ch3[100];
    cin.getline(ch3,99);//there is a third argument also which is delimeter it means where you want this to stop taking input.Default delimeter is \n.
    cout<<ch3<<endl;
    return 0;
}