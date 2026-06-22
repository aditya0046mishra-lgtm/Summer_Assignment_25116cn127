#include<iostream>
using namespace std;
int main(){
    float m1,m2,m3,m4,m5;
    float total,percentage;
    cout<<"Enter Marks of 5 subjects :- \n";
    cin>>m1>>m2>>m3>>m4>>m5;
    total = m1+m2+m3+m4+m5;
    percentage = total/5;
    cout<<"\nTotal marks = "<<total<<endl;
    cout<<"Percentage :- "<<percentage<<"%"<<endl;
    if(percentage>=60){
        cout<<"First Division";
    }
    else if(percentage>=45){
        cout<<"Second Division";
    }
    else if(percentage>=33){
        cout<<"Third Division";
    }
    else{
        cout<<"Fail";
    }
    return 0;
}