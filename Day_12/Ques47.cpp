#include<iostream>
using namespace std;
void fibonacci(int n){
    int a = 0;
    int b = 1;
    int c;
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=n;i++){
        c = a + b;
        cout<<c<<" ";
        a = b;
        b = c;
    }
}
int main(){
    int n;
    cout<<"Enter Number of terms :- ";
    cin>>n;
    fibonacci(n);
    return 0;
}