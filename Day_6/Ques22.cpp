#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int binary,decimal = 0,i = 0 , rem;
    cout<<"Enter the Binary digit :- ";
    cin>>binary;
    while(binary>0){
        rem = binary%10;
        decimal += rem*pow(2,i);
        binary /= 10;
        i++;
    }
    cout<<decimal;
    return 0;
}