#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :- ";
    cin>>n;
    int rev = 0;
    int original = n;
    while(n!=0){
        int digit = n%10;
        rev = rev * 10 + digit;
        n = n/10;
    }
    if(original == rev){
        cout<<"Pallindrome";
    }
    else{
        cout<<"Not a palimdrome number";
    }
    return 0;
}