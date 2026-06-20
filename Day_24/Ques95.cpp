#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char str[200];
    cout<<"Enter sentence :- ";
    cin.getline(str,200);
    char word[100];
    char longest[100];
    int i=0,j=0,maxLen=0;
    while(true) {
        if(str[i]==' ' || str[i]=='\0') {
            word[j]='\0';
            if(j>maxLen) {
                maxLen=j;
                strcpy(longest,word);
            }
            j=0;
            if(str[i]=='\0')
                break;
        }
        else {
            word[j]=str[i];
            j++;
        }
        i++;
    }
    cout<<"Longest Word = "<<longest;
    return 0;
}
