#include<iostream>
using namespace std;
int maximum(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a,b;
    cout<<"Enter first number :- ";
    cin>>a;
    cout<<"Enter second number :- ";
    cin>>b;
    cout<<"Maximu = "<<maximum(a,b);
    return 0;
}