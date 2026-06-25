#include<iostream>
using namespace std;
struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};
int main() {
    Product p;
    cout<<"Enter Product ID: ";
    cin>>p.id;
    cin.ignore();
    cout<<"Enter Product Name: ";
    cin.getline(p.name,50);
    cout<<"Enter Quantity: ";
    cin>>p.quantity;
    cout<<"Enter Price: ";
    cin>>p.price;
    cout<<"\n----- Product Details -----\n";
    cout<<"ID : "<<p.id<<endl;
    cout<<"Name : "<<p.name<<endl;
    cout<<"Quantity : "<<p.quantity<<endl;
    cout<<"Price : "<<p.price<<endl;
    return 0;
}