#include<iostream>
using namespace std;
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    int n;
    cout<<"Enter number of employees: ";
    cin>>n;
    Employee e[n];
    for(int i=0;i<n;i++) {
        cout<<"\nEmployee "<<i+1<<endl;
        cout<<"Employee ID: ";
        cin>>e[i].id;
        cin.ignore();
        cout<<"Employee Name: ";
        cin.getline(e[i].name,50);
        cout<<"Salary: ";
        cin>>e[i].salary;
    }
    for(int i=0;i<n;i++) {
        cout<<"\nEmployee "<<i+1<<endl;
        cout<<"ID : "<<e[i].id<<endl;
        cout<<"Name : "<<e[i].name<<endl;
        cout<<"Salary : "<<e[i].salary<<endl;
    }
    return 0;
}