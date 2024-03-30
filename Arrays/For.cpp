#include<iostream>
using namespace std;
int main(){
    int i =1;//Step 1: initialisation
    while(i<10){//Step 2: condition for loop 
        cout<<i<<" ";//Step 3: Task
        i=i+1; //Step 4: incrementation
    }
    for(int i = 1;i<=10;i=i+1){//Step 1: Initialisation,Condition and Incrementation in one line.
        cout<<i<<" ";//Step 2: Task
    }
    for(int i=1,j=3;i<=10;i++){//double variable declaration and initialization

    }
    for(;i<=20;i++){//local scope of the variables is till the end of the block where they are declared.

    }
    for(;i<=50;) {//The loop will run until the expression on right side becomes false
        i=i+1;//giving incrementation inside loop
    }
    for(int i =2;i>=2 and i<20;i++){//double Condition in loop

    }
}