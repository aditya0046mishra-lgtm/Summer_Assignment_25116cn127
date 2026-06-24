#include<iostream>
using namespace std;
struct Book{
    int id;
    char name[50];
    char aurthor[50];
};
int main(){
    Book b;
    cout<<"Enter book ID :- ";
    cin>>b.id;
    cin.ignore();
    cout<<"Enter Book Nmae :- ";
    cin.getline(b.name,50);
    cout<<"Enter Aurthor Name :- ";
    cin.getline(b.aurthor,50);
    cout<<endl;
    cout<<"Book ID :- "<<b.id<<endl;
    cout<<"Book Name :- "<<b.name<<endl;
    cout<<"Aurthor Name :- "<<b.aurthor<<endl;
    return 0;
}