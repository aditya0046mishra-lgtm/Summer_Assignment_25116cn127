#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int choice;
    do{
        cout<<"\n1. Display";
        cout<<"\n2. Sum";
        cout<<"\n3. Maximum";
        cout<<"\n4. Exit";
        cout<<"\nEnter choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                for(int i=0;i<n;i++)
                    cout<<arr[i]<<" ";
                cout<<endl;
                break;
            case 2:{
                int sum=0;
                for(int i=0;i<n;i++)
                    sum+=arr[i];
                cout<<"Sum = "<<sum<<endl;
                break;
            }
            case 3:{
                int mx=arr[0];
                for(int i=1;i<n;i++)
                    if(arr[i]>mx)
                        mx=arr[i];
                cout<<"Maximum = "<<mx<<endl;
                break;
            }
            case 4:
                cout<<"Thank You!";
                break;
            default:
                cout<<"Invalid Choice";
        }
    }while(choice!=4);
    return 0;
}