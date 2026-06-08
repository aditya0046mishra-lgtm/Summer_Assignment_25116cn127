#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter sixe of an array :- ";
    cin>>n;
    int arr[n];
    cout<<"Enter array element :- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array Element are :- ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}