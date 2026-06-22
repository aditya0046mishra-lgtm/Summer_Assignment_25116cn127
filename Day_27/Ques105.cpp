#include<iostream>
using namespace std;
struct Student{
    int roll;
    char name[50];
    float marks;
};
int main(){
    Student s;
    cout<<"Enter Roll Number :- ";
    cin>>s.roll;
    cin.ignore();
    cout<<"Enter Name :- ";
    cin.getline(s.name,50);
    cout<<"Enter Marks :- ";
    cin>>s.marks;
    cout<<"Roll Number :- "<<s.roll<<endl;
    cout<<"Name :- "<<s.name<<endl;
    cout<<"Marks :- "<<s.marks<<endl;
    return 0;
}