#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :- ";
    cin>>n;
    int count = 0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==0 && n>1){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not a Prime number";
    }
    return 0;
}