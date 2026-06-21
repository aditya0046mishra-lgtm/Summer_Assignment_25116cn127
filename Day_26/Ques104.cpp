#include<iostream>
using namespace std;
int main() {
    int score = 0;
    int ans;
    cout<<"Q1. Capital of India?\n";
    cout<<"1. Delhi\n2. Mumbai\n3. Chennai\n";
    cin>>ans;
    if(ans == 1)
        score++;
    cout<<"\nQ2. 2 + 2 = ?\n";
    cout<<"1. 3\n2. 4\n3. 5\n";
    cin>>ans;
    if(ans == 2)
        score++;
    cout<<"\nQ3. C++ is a?\n";
    cout<<"1. Programming Language\n2. Browser\n3. Operating System\n";
    cin>>ans;
    if(ans == 1)
        score++;
    cout<<"\nYour Score = "<<score<<" / 3";
    return 0;
}