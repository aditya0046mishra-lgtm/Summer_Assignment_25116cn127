#include<iostream>
#include<cstring>
using namespace std;
int main() {
    int n;
    cout<<"Enter number of words :- ";
    cin>>n;
    cin.ignore();
    char str[100][100];
    for(int i=0;i<n;i++) {
        cin.getline(str[i],100);
    }
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(strlen(str[i]) > strlen(str[j])) {
                char temp[100];
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    cout<<"Words Sorted By Length :- "<<endl;
    for(int i=0;i<n;i++)
        cout<<str[i]<<endl;
    return 0;
}