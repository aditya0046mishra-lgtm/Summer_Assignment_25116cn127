#include<iostream>
using namespace std;
int main() {
    char str[100];
    cout<<"Enter string :- ";
    cin.getline(str,100);
    cout<<"String after removing spaces :- ";
    for(int i=0;str[i]!='\0';i++) {
        if(str[i]!=' ') {
            cout<<str[i];
        }
    }
    return 0;
}