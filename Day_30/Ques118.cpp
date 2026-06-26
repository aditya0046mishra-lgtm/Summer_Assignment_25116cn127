#include<iostream>
using namespace std;
struct Book {
    int id;
    char name[50];
    char author[50];
};
int main() {
    int n;
    cout<<"Enter number of books: ";
    cin>>n;
    Book b[n];
    for(int i=0;i<n;i++) {
        cout<<"\nBook "<<i+1<<endl;
        cout<<"Book ID: ";
        cin>>b[i].id;
        cin.ignore();
        cout<<"Book Name: ";
        cin.getline(b[i].name,50);
        cout<<"Author Name: ";
        cin.getline(b[i].author,50);
    }
    for(int i=0;i<n;i++) {
        cout<<"\nBook "<<i+1<<endl;
        cout<<"ID : "<<b[i].id<<endl;
        cout<<"Name : "<<b[i].name<<endl;
        cout<<"Author : "<<b[i].author<<endl;
    }
    return 0;
}