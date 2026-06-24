#include<iostream>
using namespace std;
struct Ticket{
    int ticketNo;
    char name[50];
    char source[50];
    char destination[50];
};
int main(){
    Ticket t;
    cout<<"Enter Ticket No :- ";
    cin>>t.ticketNo;
    cin.ignore();
    cout<<"Enter Passanger Name :- ";
    cin.getline(t.name,50);
    cout<<"Enter Source :- ";
    cin.getline(t.source,50);
    cout<<"Enter Destination :- ";
    cin.getline(t.destination,50);
    cout<<endl;
    cout<<"Ticket no :- "<<t.ticketNo<<endl;
    cout<<"Passanger Name :- "<<t.name<<endl;
    cout<<"Source :- "<<t.source<<endl;
    cout<<"Destination :- "<<t.destination<<endl;
    return 0;
}