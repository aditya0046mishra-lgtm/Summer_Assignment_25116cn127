#include<iostream>
using namespace std;
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    Student s[n];
    for(int i=0;i<n;i++) {
        cout<<"\nStudent "<<i+1<<endl;
        cout<<"Enter Roll Number: ";
        cin>>s[i].roll;
        cin.ignore();
        cout<<"Enter Name: ";
        cin.getline(s[i].name,50);
        cout<<"Enter Marks: ";
        cin>>s[i].marks;
    }
    for(int i=0;i<n;i++) {
        cout<<"\nStudent "<<i+1<<endl;
        cout<<"Roll : "<<s[i].roll<<endl;
        cout<<"Name : "<<s[i].name<<endl;
        cout<<"Marks : "<<s[i].marks<<endl;
    }
    return 0;
}