#include<iostream>
using namespace std;

int main() {

    int secret = 7;
    int guess;

    do {
        cout<<"Guess the number (1-10): ";
        cin>>guess;

        if(guess > secret)
            cout<<"Too High!"<<endl;
        else if(guess < secret)
            cout<<"Too Low!"<<endl;
        else
            cout<<"Correct Guess!"<<endl;

    } while(guess != secret);

    return 0;
}