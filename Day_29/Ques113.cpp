#include<iostream>
using namespace std;
int main(){
    int choice;
    float a,b;
    do{
        cout<<"\n1. Addition";
        cout<<"\n1. Subtraction";
        cout<<"\n1. Multiplication";
        cout<<"\n1. Division";
        cout<<"\n1. Exit";
        cout<<"\nEnter Choices :- ";
        cin>>choice;
        if(choice>=1 && choice<=4){
            cout<<"Enter Two Number :- ";
            cin>>a>>b;
        }
        switch(choice){
            case 1:
            cout<<"Sum = "<<a+b<<endl;
            case 2:
            cout<<"Diffrence = "<<a-b<<endl;
            case 3:
            cout<<"Product = "<<a*b<<endl;
            case 4:
                if(b!=0)
                    cout<<"Division = "<<a/b<<endl;
                else
                    cout<<"Division by Zero not possible"<<endl;
                    break;
            case 5:
            cout<<"Thank You";
            break;
            default:
            cout<<"Invalid Choice";
        }
    }while(choice!=5);
        return 0;
}