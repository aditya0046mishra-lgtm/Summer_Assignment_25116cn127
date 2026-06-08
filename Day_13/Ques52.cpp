#include<iostream>
using namespace std;
int main(){
    int n;
    int even = 0;
    int odd = 0;
    cout<<"Enter size of array :- ";
    cin>>n;
    int arr[n];
    cout<<"Enter array element :- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"Even element :- "<<even<<endl;
    cout<<"Odd element :- "<<odd;
    return 0;
}