#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number :- ";
    cin>>n;
    int binary = 0 , place = 1 , rem;
    while(n>0){
        rem = n % 2;
        binary += rem*place;
        place *= 10;
        n /= 2;
    }
    cout<<binary;
    return 0;
}