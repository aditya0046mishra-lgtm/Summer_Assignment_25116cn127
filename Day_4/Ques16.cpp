#include<iostream>
using namespace std;
int main(){
    int start,end;
    cout<<"Enter starting number :- ";
    cin>>start;
    cout<<"Enter ending number :- ";
    cin>>end;
    for(int n=start;n<=end;n++){
        int temp = n;
        int sum = 0;
        int digit;
        while(temp!=0){
            digit = temp%10;
            sum = sum + (digit*digit*digit);
            temp = temp/10;
        }
        if(sum==n){
            cout<<n<<" ";
        }
    }
    return 0;
}