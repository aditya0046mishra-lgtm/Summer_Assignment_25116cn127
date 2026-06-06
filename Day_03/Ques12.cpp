#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter first number :- ";
    cin>>a;
    int b;
    cout<<"Enter second number :- ";
    cin>>b;
    int gcd,lcm;
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    lcm = (a*b)/gcd;
    cout<<"LCM = "<<lcm;
    return 0;
}