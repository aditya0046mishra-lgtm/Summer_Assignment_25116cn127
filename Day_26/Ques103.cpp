#include<iostream>
using namespace std;
int main() {
    int choice;
    float balance = 10000;
    float amount;
    do {
        cout<<"\n1. Check Balance";
        cout<<"\n2. Deposit";
        cout<<"\n3. Withdraw";
        cout<<"\n4. Exit";
        cout<<"\nEnter Choice: ";
        cin>>choice;
        switch(choice) {
            case 1:
                cout<<"Balance = "<<balance<<endl;
                break;
            case 2:
                cout<<"Enter amount: ";
                cin>>amount;
                balance += amount;
                cout<<"Amount Deposited\n";
                break;
            case 3:
                cout<<"Enter amount: ";
                cin>>amount;
                if(amount <= balance) {
                    balance -= amount;
                    cout<<"Amount Withdrawn\n";
                }
                else {
                    cout<<"Insufficient Balance\n";
                }
                break;
            case 4:
                cout<<"Thank You!";
                break;
            default:
                cout<<"Invalid Choice";
        }
    } while(choice != 4);
    return 0;
}