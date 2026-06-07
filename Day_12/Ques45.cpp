#include<iostream>
using namespace std;
bool pallindrome(int n){
    int original = n;
    int rev = 0;
    while(n!=0){
        int digit = n%10;
        rev = rev*10+digit;
        n = n/10;
    }
    return original == rev;
}
int main(){
    int n;
    cout<<"Enter a number :- ";
    cin>>n;
    if(pallindrome(n)){
        cout<<"Pallindrome";
    }
    else{
        cout<<"Not Pallindrome Number";
    }
    return 0;
}