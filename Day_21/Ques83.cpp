#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter string ;- ";
    cin.getline(str,100);
    int vowels = 0;
    int consonent = 0;
    for(int i=0;str[i]!='\0';i++){
        char ch = str[i];
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
            if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' ||
            ch=='i' || ch=='o' || ch=='u'){
                vowels++;
            }
            else{
                consonent++;
            }
        }
    }
    cout<<"Vowels = "<<vowels<<endl;
    cout<<"Consonent = "<<consonent<<endl;
    return 0;
}