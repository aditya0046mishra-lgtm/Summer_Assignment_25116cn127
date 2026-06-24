#include<iostream>
using namespace std;
struct Contact{
    char name[50];
    char phone[20];
    char email[50];
};
int main(){
    Contact c;
    cout<<"Enter Name :- ";
    cin.getline(c.name,50);
    cout<<"Enter Phone Number :- ";
    cin.getline(c.phone,50);
    cout<<"Enter Email :- ";
    cin.getline(c.email,50);
    cout<<"Name :- "<<c.name<<endl;
    cout<<"Phone :- "<<c.phone<<endl;
    cout<<"Email :- "<<c.email<<endl;
    return 0;
}