#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter size :- ";
    cin>>n;
    int arr[n];
    cout<<"Enter sorted array :- ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int item;
    cout<<"Enter element to search :- ";
    cin>>item;
    int low = 0;
    int high = n-1;
    bool found = false;
    while(low <= high) {
        int mid = (low + high)/2;
        if(arr[mid] == item) {
            found = true;
            break;
        }
        else if(arr[mid] < item) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if(found)
        cout<<"Element Found";
    else
        cout<<"Element Not Found";
    return 0;
}