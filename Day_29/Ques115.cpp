#include<iostream>
using namespace std;
int main() {
    char str[100];
    cout<<"Enter string: ";
    cin.getline(str,100);
    int choice;
    do{
        cout<<"\n1. Length";
        cout<<"\n2. Reverse";
        cout<<"\n3. Exit";
        cout<<"\nEnter choice: ";
        cin>>choice;
        switch(choice){
            case 1:{
                int len=0;
                while(str[len]!='\0')
                    len++;
                cout<<"Length = "<<len<<endl;
                break;
            }
            case 2:{
                int len=0;
                while(str[len]!='\0')
                    len++;
                cout<<"Reverse = ";
                for(int i=len-1;i>=0;i--)
                    cout<<str[i];
                cout<<endl;
                break;
            }
            case 3:
                cout<<"Thank You!";
                break;
            default:
                cout<<"Invalid Choice";
        }
    }while(choice!=3);
    return 0;
}