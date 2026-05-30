#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter a nuber :- ";
    cin>>n;
    int num = 1;
    for(int i=1;i<=10;i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}