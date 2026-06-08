#include<iostream>
using namespace std;
int main(){
    int n;
    int count = 0;
    cout<<"Enter size of an array :- ";
    cin>>n;
    int arr[n];
    cout<<"Enter array element :- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    };
    int item;
    cout<<"Enter element :- ";
    cin>>item;
    for(int i=0;i<n;i++){
        if(arr[i]==item){
            count++;
        }
    }
    cout<<"Frequency = "<<count;
    return 0;
}