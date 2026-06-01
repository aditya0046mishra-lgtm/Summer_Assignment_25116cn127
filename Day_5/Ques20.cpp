#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :- ";
    cin>>n;
    int largestPrime = -1;
    while(n%2==0){
        largestPrime = 2;
        n /= 2;
    }
    for(int i=3;i<=n;i++){
        while(n%i==0){
            largestPrime = i;
            n /= i;
        }
    }
    cout<<"Largest Prime Factor = "<<largestPrime;
    return 0;
}