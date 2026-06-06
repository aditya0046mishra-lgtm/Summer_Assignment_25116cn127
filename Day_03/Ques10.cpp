#include<iostream>
using namespace std;
int main(){
    int start;
    cout<<"Enter Starting number :- ";
    cin>>start;
    int end;
    cout<<"Enter Ending number :- ";
    cin>>end;
    for(int n=start;n<=end;n++){
        int count = 0;
        for(int i=2;i<n;i++){
            if(n%i==0){
                count++;
            }
        }
        if(count==0 && n>1){
            cout<<n<<" ";
        }
    }
    return 0;
}