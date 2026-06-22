#include<iostream>
using namespace std;
struct Employee{
    int id;
    char name[50];
    float salary;
};
int main(){
    Employee e;
    cout<<"Enter Employee ID :- ";
    cin>>e.id;
    cin.ignore();
    cout<<"Enter Employee Name :- ";
    cin.getline(e.name,50);
    cout<<"Enter Salary :- ";
    cin>>e.salary;
    cout<<endl;
    cout<<"ID :- "<<e.id<<endl;
    cout<<"Name :- "<<e.name<<endl;
    cout<<"Salary :- "<<e.salary<<endl;
    return 0;
}