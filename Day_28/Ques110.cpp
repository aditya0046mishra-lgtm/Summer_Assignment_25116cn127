#include<iostream>
using namespace std;
struct Bank{
    int accNo;
    char name[50];
    float balance;
};
int main(){
    Bank b;
    cout<<"Enter Account Number :- ";
    cin>>b.accNo;
    cin.ignore();
    cout<<"Enter Name :- ";
    cin.getline(b.name,50);
    cout<<"Enter Balance :- ";
    cin>>b.balance;
    cout<<endl;
    cout<<"Account Number :- "<<b.accNo<<endl;
    cout<<"Name :- "<<b.name<<endl;
    cout<<"Balance :- "<<b.balance<<endl;
    return 0;
}