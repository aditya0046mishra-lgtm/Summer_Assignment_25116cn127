#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size :- ";
    cin>>n;
    int arr[n];
    cout<<"Enter Element :- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cout<<"Enter target sum :- ";
    cin>>sum;
    cout<<"Pairs are :- "<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
    return 0;
}