#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size :- ";
    cin>>n;
    int arr[n];
    cout<<"Enter element :- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array after removing duplicate :- ";
    for(int i=0;i<n;i++){
        bool duplicate = false;
        for(int j=0;j<i;i++){
            if(arr[i]==arr[j]){
                duplicate = true;
                break;
            }
        }
        if(!duplicate){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}