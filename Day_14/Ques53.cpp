#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array :- ";
    cin>>n;
    int arr[n];
    cout<<"Enter array element :- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int item;
    cout<<"Enter element to search :- ";
    cin>>item;
    bool found = false;
    for(int i=0;i<n;i++){
        if(arr[i]==item){
            cout<<"Element found at index :- "<<i;
            found = true;
            break;
        }
    }
    if(found==false){
        cout<<"Element not found";
    }
    return 0;
}