#include<iostream>
using namespace std;
void result(char name[],int marks[]){
    int total = 0;
    for(int i=0;i<5;i++){
        total += marks[i];
    }
    float percentage = total/5.0;
    cout<<"\nName :- "<<name<<endl;
    cout<<"Total :- "<<total<<endl;
    cout<<"Percentage :- "<<percentage<<"&"<<endl;
    if(percentage>=33){
        cout<<"Result :- Pass";
    }else{
        cout<<"Result :- Fail";
    }
}
int main(){
    char name[50];
    int marks[5];
    cout<<"Enter Student Name :- ";
    cin.getline(name,50);
    cout<<"Enter marks of 5 subject :- \n";
    for(int i=0;i<5;i++){
        cin>>marks[i];
    }
    result(name,marks);
    return 0;
}