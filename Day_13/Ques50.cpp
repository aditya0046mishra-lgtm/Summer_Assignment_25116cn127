#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array :- ";
    cin>>n;
    int arr[n];
    int sum = 0;
    cout<<"Enter array element :- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }
    float avg = (float)sum / n;
    cout<<"Sum = "<<sum<<endl;
    cout<<"Average = "<<avg;
    return 0;
}
